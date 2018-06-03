#include <iostream>
#include <string>
using namespace std;
struct s1{
   string str;
   int i;
   struct s1 *ptr;
};

struct s1 a[]={{"PHYSICS",1,a+1}, {"CHEMISTRY",2,a+2}, {"MATHS",3,a}};
struct s1 *p=a;

int main() {
   //int j;
   cout << a[++p->i].str << ",";
   cout << a[--(p->ptr->i)].str;
   return 0;
}
