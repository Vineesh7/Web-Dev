var rndInt1 = Math.floor(Math.random() * 6) + 1;
var path1 = "images/dice" + rndInt1 + ".png";
document.querySelectorAll("img")[0].setAttribute("src", path1);
var rndInt2 = Math.floor(Math.random() * 6) + 1;
var path2 = "images/dice" + rndInt2 + ".png";
document.querySelectorAll("img")[1].setAttribute("src", path2);
if (rndInt1 > rndInt2) {
  document.querySelector("h1").innerHTML = "Player1 Wins!";
} else if (rndInt2 > rndInt1) {
  document.querySelector("h1").innerHTML = "Player2 Wins!";
} else {
  document.querySelector("h1").innerHTML = "Draw!";
}
