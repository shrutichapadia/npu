#include <iostream>
#include "rectangle_radius.h"

using namespace std;

int main(){

Rectangle rectangle1("3.4,5.5");
Rectangle rectangle2("4.5,5.0");

cout << "Width and Height of Rectangle" << rectangle1.getWidth();
cout << rectangle1.getHeight() << endl;
cout << "Area of Rectangle:" << rectangle2.getArea() << endl;

}
