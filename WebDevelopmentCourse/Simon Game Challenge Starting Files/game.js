
var gamePattern = [];

var userClickedPattern = [];

var buttonColours = ["red","blue","green","yellow"];

var started = false;
var level = 0;


$(document).keypress(function(){
  if(!started){

    $("#level-title").text("Level "+ level);

    nextSequence();
    started = true;
  }

});


$(".btn").click(function(){
  var userChosenColour = $(this).attr("id");

    userClickedPattern.push(userChosenColour);
    animatePress(userChosenColour);
    playSound(userChosenColour);
    checkAnswer(userClickedPattern.length-1 );
});



function checkAnswer(currentLevel){
  if(userClickedPattern[currentLevel] === gamePattern[currentLevel]){
    console.log("success");
  }

  if(userClickedPattern.length === gamePattern.length){

    setTimeout(function(){
      nextSequence();

    },1000);
  }  else{
    console.log("wrong");
    $("body").addClass("game-over");
    setTimeout(function(){ $("body").removeClass("game-over")},200);
    $("#level-title").text("Game Over, Press Any Key to Restart");
    playSound("wrong");

    startOver();
  }




}


function nextSequence(){

  userClickedPattern = [];

  level++;
  $("#level-title").text("Level "+level);

  var randomNumber =  Math.floor(Math.random()*4);
  var randomChosenColour = buttonColours[randomNumber];


  gamePattern.push(randomChosenColour);

  $("#"+randomChosenColour).fadeOut(100).fadeIn(100).fadeOut(100).fadeIn(100);

  playSound(randomChosenColour);

}



function playSound(name){

  var audio = new Audio("sounds/" + name + ".mp3");
    audio.play();

}


function animatePress(currentColour){

  $("#"+currentColour).addClass("pressed");

  setTimeout(function(){
    $("#"+currentColour).removeClass("pressed");
  },100);

}




function startOver(){
  level = 0;
  gamePattern = [];
  started = false;


}
