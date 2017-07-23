#include "box.h"
#include <iostream>

Box::Box(){
	}
Box::Box(int x, int y){
	Length=x;
	Width=y;
}
int Box::getLength(){
	return Length;
}



