#include <iostream>
#include "Line.h"
 
using namespace std;
 
 
// Member functions definitions including constructor
Line::Line( double len) {
   cout << "Object is being created, length = " << len << endl;
   length = len;
}
 
void Line::setLength( double len ) {
   length = len;
}
 
double Line::getLength( void ) {
   return length;
}
int add(int x,int y){
int a=x+y;
return a;
}

