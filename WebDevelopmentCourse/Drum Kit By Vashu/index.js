var nt = document.querySelectorAll(".drum").length;
//detecting click
for(var i = 0;i<nt;i++){
  document.querySelectorAll(".drum")[i].addEventListener("click",function (){

    var buttonpres = this.innerHTML;

    wordm(buttonpres);
    buttonAnimation(buttonpres);

  });

}
//detecting keyboard keys


document.addEventListener("keydown", function(event){




  wordm(event.key);

  buttonAnimation(event.key);


});



function wordm(ch){


  switch (ch) {
    case "w":
        var tom1 = new Audio("sounds/tom-1.mp3");
        tom1.play();
        break;

    case "a":
        var tom2 = new Audio("sounds/tom-2.mp3");
        tom2.play();
        break;

    case "s":
        var tom3 = new Audio("sounds/tom-3.mp3");
        tom3.play();
        break;

    case "d":
        var tom4 = new Audio("sounds/tom-4.mp3");
        tom4.play();
        break;


    case "j":
        var crash = new Audio("sounds/snare.mp3");
        crash.play();
        break;


    case "k":
        var kick= new Audio("sounds/crash.mp3");
        kick.play();
        break;


    case "l":
        var snare = new Audio("sounds/kick-bass.mp3");
        snare.play();
        break;

    default:console.log(ch);

  }
}


function buttonAnimation(currentkey){

  var activebutton =document.querySelector("."+currentkey);
  activebutton.classList.toggle("pressed");

  setTimeout(function(){

    activebutton.classList.remove("pressed");
  },100);







}
