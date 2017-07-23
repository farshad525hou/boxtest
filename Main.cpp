#include <stdio.h>
#include <iostream>
#include "Line.h"
#include "box.h"
using namespace std;

int main(){
	Line line(10.0);
 
   // get initially set length.
   cout << "Length of line : " << line.getLength() <<endl;
	
   // set line length again
   line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;
	int l=add(2,3);
   cout << "ANswer is " << l<<endl;

	Box boxa();

   return 0;

}
