
//getelementbyid method
var myElement = document.getElementById("intro");
document.getElementById("demo").innerHTML = 
"The text from the intro paragraph is " + myElement.innerHTML;


//getelementbytagname

document.getElementsByTagName("span")[0].innerHTML="attached content" ;

//getelementsbyclassname


document.getElementsByClassName("first")[0].innerHTML="hello div first" ;

//set attribute of tag

document.getElementById("myImage").src = "./bulbon.gif";

//change style

document.getElementById("stylechange").style.color = "blue";


//node manipulation code

var parent = document.getElementById("div1");
var child = document.getElementById("p1");
var para = document.createElement("p");
var node = document.createTextNode("This is new.");
para.appendChild(node);
parent.replaceChild(para,child);
parent.removeChild(para);




//event handling content

//onclick

function displayDate() {
  document.getElementById("content").innerHTML = Date();
}

//onmouseover - out

function mOver(obj) {
  obj.innerHTML = "Thank You"
}

function mOut(obj) {
  obj.innerHTML = "Mouse Over Me"
}

//onchange

function myFunction() {
  var x = document.getElementById("fname");
  x.value = x.value.toUpperCase();
}



//form validation


function myFunction2() {
  var x, text;

  // Get the value of the input field with id="numb"
  x = document.getElementById("numb").value;

  // If x is Not a Number or less than one or greater than 10
  if (isNaN(x) || x < 1 || x > 10) {
    text = "Input not valid";
  } else {
    text = "Input OK";
  }
  document.getElementById("demo1").innerHTML = text;
}



