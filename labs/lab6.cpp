//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab06.cpp
/// @brief cs010_practice/labs/lab06
///
/// @author Matthew Lumantas [mluma001@ucr.edu]
/// @date May 4, 2015
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
   int scoreInput;
   int numAs = 0;
   int numBs = 0;
   int numCs = 0;
   int numDs = 0;
   int numFs = 0;
   
   //initial input prompt
   cout << "Enter one or more grades, or -1 to stop: " << endl;
   
   //do-while continue adding scores until sentinel
   do {
      cin >> scoreInput;
      
      //check for A
      if ((scoreInput >= 90) && (scoreInput <= 100)) {
         ++numAs;
      }
      
      //check for B
      else if ((scoreInput >= 80) && (scoreInput <= 89)) {
         ++numBs;
      
      }
      else if ((scoreInput >= 70) && (scoreInput <= 79)) {
         ++numCs;
      }
      
      //check for D
      else if ((scoreInput >= 60) && (scoreInput <= 69)) {
         ++numDs;
      }
      
      //check for F
      else if ((scoreInput >= 0) && (scoreInput <= 59)) {
         ++numFs;
      }
          
   }while(scoreInput >= 0);
   
   //output all the grades
   cout << endl;
   cout << "The grades breakdown is: " << endl;
   cout << "As: " << numAs << endl;
   cout << "Bs: " << numBs << endl;
   cout << "Cs: " << numCs << endl;
   cout << "Ds: " << numDs << endl;
   cout << "Fs: " << numFs << endl;
   
   return 0;
}