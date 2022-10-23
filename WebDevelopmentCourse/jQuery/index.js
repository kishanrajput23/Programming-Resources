
// $("h1").text("bye");
// $("button").text("dont click me");
$("button").html("<em>Hye</em>");
// console.log($("img").attr("src"));
//
// $("a").attr("href","https://www.yahoo.com");


// $("h1").click(function(){
//   $("h1").css("color","purple");
//
// });


//
//
//
//
//
// $("button").click(function(){
//
//   $("h1").css("color","purple");
// })
//
// $(document).keypress(function(event){
//   $("h1").text(event.key);
//
// });

$("button").on("click",function(){
  $("h1").css("color","green").slideUp().slideDown().animate({opacity: 0.5 ,margin : "20%"});




})
