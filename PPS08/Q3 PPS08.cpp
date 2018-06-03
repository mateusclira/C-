#include<iostream>
using namespace std;

struct course {
   char year;
};
struct course cs101x;

struct course course_backup () {
   cs101x.year = 'F' ;
   return cs101x ;
}

int main () {
   struct course cb = course_backup () ;
   cb.year = 'S';
   cout << cb.year << endl;
   cout << cs101x.year << endl ;
   return 0;
}
