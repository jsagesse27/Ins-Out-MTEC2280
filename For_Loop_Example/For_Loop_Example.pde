void setup() {
  size(600, 600);
  noFill();
  stroke(0);



  for (int i = 0; i < 10000; i++) {
    float x = random(width);
    float y = random(height);
    ellipse(x, y, 10, 10);
  }
}