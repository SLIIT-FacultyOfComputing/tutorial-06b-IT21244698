#include "Box.h"

// Implement setters and getters
void Box::setHeight(int dheight){
  height = dheight;
}
void Box::setWidth(int dwidth){
  width = dwidth;
}
void Box::setLength(int dlength){
  length = dlength;
}

int Box::getLength(){
  return length;
}
int Box::getHeight(){
  return height;
}
int Box::getWidth(){
  return width;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length * width * height;
  
}
