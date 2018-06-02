#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

struct student {
   int rollNumber;
   char name[50];
   int year;
   char division;
};
struct marks {
   int rollNumber;
   int marksPhysics;
   int marksChemistry;
   int marksMaths;
};

int main() {
   marks m[10];
   student s[10] = {1,"Goyal",3,'A'};   //Statement 1
   int counter;

   for(counter = 0;counter<9;counter++) {
      s[counter+1] =  s[counter] ;    //Statement 2
   //   cout << s[counter].name << endl;
   }

   for(counter = 0;counter<10;counter++) {
      m[counter].rollNumber = counter;
      m[counter].marksPhysics = counter+10;
      m[counter].marksChemistry = counter+20;
      m[counter].marksMaths = counter+30;
   }

   cout << m[9].rollNumber << ", " << m[9].marksPhysics << ", " << m[9].marksChemistry << ", " << m[9].marksMaths;  //Statement 3

   return 0;
}
