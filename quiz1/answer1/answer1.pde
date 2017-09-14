float eXPos;
float eX;
float eY;
float rX;
float rY;
float eW;
float eH;
float rW;
float rH;

void setup() {
  size(600,600);
  background(0,170,255);
  //ellipse
  eX = width/4;
  eY = height/4;
  eW = width/2;
  eH = height/2;
  //rectangle
  rX = width/2;
  rY = height/2;
}

void draw() {
  noStroke();
  fill(255,0,0);
  ellipse(eX,eY,eW,eH);
  stroke(0);
  strokeWeight(3);
  fill(255,255,0);
  rect(rX,rY,rX,rY);
}