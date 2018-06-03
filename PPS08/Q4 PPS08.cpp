#include<iostream>
using namespace std;

struct xycoordinate{
  int x;
  int y;
};

struct xycoordinate createPoint(int x, int y){
  struct xycoordinate point;
  point.x=x;
  point.y=y;
  return point;
}

int main(){
  int a, b;
  a = 5;
  b = 10;
  xycoordinate XY;
  XY=createPoint(a,b);
  cout << XY.x;
  cout << XY.y;
}
