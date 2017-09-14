void setup() {
  size(500,500);
  background(0);
}

void draw() {
  float r = random(255);
  float g = random(255);
  float b = random(255);
  if(mouseY <= height/2) {
    stroke(r,g,b);
    line(random(width),random(width), random(height),random(height));
  }
}