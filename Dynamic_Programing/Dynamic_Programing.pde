void setup() {
  size(600,600);
  background(0);
  strokeWeight(4);
  stroke(255,0,0);
 }


void draw() {
 background(0);
 fill( random(255) );
 ellipse(width/2, height/2, mouseX, mouseY);
 
}