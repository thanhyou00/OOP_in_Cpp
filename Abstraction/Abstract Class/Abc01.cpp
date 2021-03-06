#include<bits/stdc++.h>
using namespace std;

// Abstract class

class Shape {
   public:
      virtual int Area() = 0; // Khai bao ham thuan ao bang 0
      void setWidth(int width) {
         this->width = width;
      }
      void setHeight(int height) {
         this->height = height;
      } 
   protected:
      int width;
      int height;
};
class Rectangle: public Shape { // Rectangle ke thua tu Shape
   public:
      int Area() { 
         return (width * height); // Rectangle thuc thi (implement) phuong thuc Area() tu Shape
      }
};
class Triangle: public Shape { // Triangle ke thua tu Shape
   public:
      int Area() { 
         return (width * height)/2; // Triangle thuc thi (implement) phuong thuc Area() tu Shape
      }
};
int main() {
  Rectangle R;
  Triangle T;

  R.setWidth(5);
  R.setHeight(10);

  T.setWidth(20);
  T.setHeight(8);
  cout <<R.Area() << endl;
  cout <<T.Area() << endl;
}

