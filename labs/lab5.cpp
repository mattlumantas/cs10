//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab05.cpp
/// @brief cs010_practice/labs/lab05
///
/// @author Matthew Lumantas [mluma001@ucr.edu]
/// @date April 28, 2015
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
   
   int ex;
   int i = 0;
   string userInput;
   
   //choose exercise
   cout << "Which exercise? ";
   cin >> ex;
   cout << endl;
   
   //exercise 1
   if (1 == ex)
   {
      
      //get word input
      cout << "Enter a word: ";
      cin >> userInput;
      cout << endl;
      
      //find and replace e i x
      for ( i = 0; i <= userInput.length() - 1; ++i) {
         if (userInput.at(i) == 'e') {
            userInput.at(i) = '3';
         }
         else if (userInput.at(i) == 'i') {
            userInput.at(i) = '1';
         }
         else if (userInput.at(i) == 'x') {
            userInput.at(i) = '*';
         }
      }
      cout << "Your word transformed is " << userInput << endl;
   }
   
   //exercise 2
   else if (2 == ex)
   {
      
      //get word input
      cout << "Enter a word: ";
      cin >> userInput;
      cout << endl;
      
      //look for character
      if (userInput.find('.') != string::npos) {
         cout << "The character '.' is located at index "
            << userInput.find('.') << endl;
      }
      else {
         cout << "The entry does not contain the character '.'" << endl;
      }
      
      //look for string
      if (userInput.find("stop") != string::npos) {
         cout << "The word \"stop\" starts at index "
            << userInput.find("stop") << endl;
      }
      else {
         cout << "The entry does not contain the word \"stop\" " << endl;
      }
   }
   return 0;
}