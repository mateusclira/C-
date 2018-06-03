#include<iostream>
  using namespace std;

  struct time {
    int hours;
    int minutes;
  };
  struct time t;

  int main() {
    t.hours = 5;
    t.minutes = 30;
    cout << "5 hours and 30 minutes equal to " << (t.hours*60) + t.minutes << " minutes " <<endl;
    return 0;
 }
