//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab3.cpp
/// @brief cs010_practice/labs/lab03
///
/// @author Matthew Lumantas [mluma001@ucr.edu]
/// @date April 13, 2015
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <string>

using namespace std;

int main() 
{
   /* declare charge, tendered, change, dollars, quarters, dimes, 
      nickels, pennies */
   double chargeCost = 0.0;
   double tenderedAmount = 0.0;
   double totalChange = 0.0;
   int dollars, quarters, dimes, nickels, pennies = 0;
   
   // ask for cost and tendered amount
   cout << "Enter purchase amount: ";
   cin >> chargeCost;
   cout << endl << "Enter amount received: ";
   cin >> tenderedAmount;
   
   
   // calculate change
   totalChange = tenderedAmount - chargeCost;
   
   //print change
   cout << endl << "Total Change: " << '$' << totalChange << endl;
   
   // convert change to pennies
   pennies = static_cast<int> ( totalChange * 100 + .5);
   
   // starting at dollars go down
   dollars = pennies / 100;
    
   // remove dollars from penny count
   pennies = pennies % 100;
    
   // quarters changed
   quarters = pennies / 25;
    
   // remove quarters
   pennies = pennies % 25;
    
   // dimes changed
   dimes = pennies / 10;
    
   // dimes removed
   pennies = pennies % 10;
    
   // nickels changed
   nickels = pennies / 5;
    
   // nickels removed and pennies left over
   pennies = pennies % 5;
    
   //print out change
   cout << endl << "dollars " << dollars << endl;
   cout << "quarters " << quarters << endl;
   cout << "dimes " << dimes << endl;
   cout << "nickels " << nickels << endl;
   cout << "pennies " << pennies << endl;
    
    
   return 0;
}