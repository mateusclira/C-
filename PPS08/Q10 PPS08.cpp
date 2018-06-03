#include<iostream>
#include<cstdlib>
using namespace std;

struct A{
  int x;
  int y;
  int z;
};

struct A* D(int x, int y, int z){
  struct A* C=(struct A *) malloc(sizeof(struct A));
  (*C).x=x*y;
  (*C).y=y*z;
  (*C).z=x*z;
  return C;
}

int main(){
  int a=2,b=3,c=4;
  struct A* E;
  E=D(a,b,c);
}
