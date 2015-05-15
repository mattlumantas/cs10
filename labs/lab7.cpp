//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab7.cpp
/// @brief cs010_practice/labs/lab07
///
/// @author Matthew Lumantas [mluma001@ucr.edu]
/// @date May 10, 2015
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//random number generator
int genRandInt(int minRoll, int maxRoll) {
   return ((rand() % (maxRoll - minRoll + 1)) + minRoll);
}

int main() {
   
   int exercise = 0;
   int userMin = 0;
   int userMax = 0;
   int tossRes = 0;
   string userInput;
   
   //seed RNG
   srand(time(0));
   
   //choose exercise
   cout << "Which exercise? ";
   cin >> exercise;
   cout << endl;
   
   //exercise 1
   if (exercise == 1) {
      
      //user enters minimum
      cout << "Enter the smallest possible number: ";
      cin >> userMin;
      cout << endl;
      
      //user enters maximum
      cout << "Enter the biggest possible number: ";
      cin >> userMax;
      cout << endl;
   
      //print random number 3 times
      for (int i = 0; i < 3; ++i) {
         cout << "Random number: " << genRandInt(userMin, userMax) << endl;
      }
   }
   
   // exercise 2
   else {
      
      //flip coin until quit
      do {
         tossRes = genRandInt(1, 2);
         
         //heads flip
         if (tossRes == 1) {
            cout << "Flip: heads" << endl;
         }
         
         //tails flip
         else {
            cout << "Flip: tails" << endl;
         }
         
         //request continue
         cout << "Toss the coin again (yes/no)? ";
         cin >> userInput;
         cout << endl;
      }while(userInput != "no");
   }
   return 0;
}