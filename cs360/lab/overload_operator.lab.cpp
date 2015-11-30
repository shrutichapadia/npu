#include <iostream>
using namespace std;
class Box {
public:
  Box(int length, int height,int bredth);
    length(l);
    height(h);
    bredth(b);
  int getvolume();
  Box operator + (Box volume);
  Box(){};
private:
  int length;
  int height;
  int bredth;
};
Box::Box(int length, int height,int bredth)
 {
      l = length; h = height; b = bredth;
     }

Box::Box operator+(Box volume) {
  Box temp;
  temp.l = l + volume.l;
  temp.h = h+ volume.h;
  temp.b = b+ volume.b;
 return (temp);
 }
int Box::getvolume(){
   int volume = (l* b * h);
   return volume;
 }
int main () {
    Box a(3,4,5);
  Box b (1,7,6);
 Box c;
  c = a + b;
cout << c.l << "," << c.h << c.b;
count << getvolume() << endl;

  return 0;
}
