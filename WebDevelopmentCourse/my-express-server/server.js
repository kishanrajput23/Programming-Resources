const express = require("express");
const app = express();


app.get("/",function(request,response){

  response.send("<h1>Hello,world</h1>");


})

app.get("/contact",function(req,res){
  res.send("contact me at vashuag9@gmail.com");
})

app.get("/about",function(req,res){
  res.send("Hey this is vashu agarwal learning thousands of things to teach millions!");
})

app.get("/hobbies",function(req,res){
  res.send("Enjoy adventures ");
})

app.listen(3000,function(){
  console.log("Server started on port 3000")


});
