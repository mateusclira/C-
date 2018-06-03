#include<iostream>
using namespace std;
struct bankCustomer {
   long int account_number;
   char customer_first_name[50];
   double balance;
   char account_type;
};

int main() {
   struct bankCustomer customer = {123,"Amit",4850,'R'};
   int penalty_points = -10;

   if(customer.account_type  ==  'S') {
      if(customer.balance <=  0) {
         penalty_points = 10;
      }
      else {
         penalty_points = 0;
      }
   }

  if(customer.account_type  ==  'R') {
      if(customer.balance < 5000) {
         penalty_points = 40;
      }
      else {
         penalty_points = 0;
      }
   }

   if(penalty_points<0)
      cout << "Invalid account" << endl;
   if(penalty_points>0)
      cout << "Penalty is levied on the account" << endl;
   if(penalty_points == 0)
      cout << "Account valid. No penalty levied" << endl;

   return 0;
}
