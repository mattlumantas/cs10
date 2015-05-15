//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab04.cpp
/// @brief cs010_practice/labs/lab04
///
/// @author Matthew Lumantas [mluma001@ucr.edu]
/// @date April 21, 2015
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
   char userInput;
   string inputType;
   
   cout << "Enter a character: ";
   cin >> userInput;
   
   if (userInput <= '9' && userInput >= '0') {
      inputType = "a numeric digit";
   }
   else if (userInput <= 'Z' && userInput >= 'A') {
      inputType = "an uppercase letter";
   }
   else if (userInput <= 'z' && userInput >= 'a') {
      inputType = "a lowercase letter";
   }
   else {
      inputType = "an unknown character type";
   }
  
   cout << endl << "You entered " << inputType << "." << endl;
    
    
   return 0;
}