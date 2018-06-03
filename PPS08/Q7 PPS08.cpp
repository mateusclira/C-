#include<iostream>
using namespace std;

struct pixel{
  int x;
  int y;
};

struct pixel assignValuesToPixel(int x, int y){
  struct pixel p;
  p.x=x;
  p.y=y;
  return p;
}
int main(){
  int a=4,b=5;
  int c=6,d=5;
  pixel p1, p2;
  p1 = assignValuesToPixel(a,b);
  p2 = assignValuesToPixel(c,d);
  cout<<p1+p2;
}
