//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab2.cpp
/// @brief assignment02/lab2
///
/// @author Matthew Lumantas [mluma001@ucr.edu]
/// @date April 4, 2015
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
//Strings for each word input
   string pronoun;
   string emotion;
   string bodyPart;
   string erAdj;
   string size;
   string noun;
   string preposition;
   string preposition2;
   string bodyPart2;
   string stateOfBeing1;
//String for dashed line for story segment
   string measuringStick(80, '-');
   
//Requests for inputs
   cout << "Please enter a pronoun: ";
   cin >> pronoun;
   cout << endl << "Please enter an emotion: ";
   cin >> emotion;
   cout << endl << "Please enter a body part: ";
   cin >> bodyPart;
   cout << endl << "Please enter an adjective with -er: ";
   cin >> erAdj;
   cout << endl << "Please enter a word about size: ";
   cin >> size;
   cout << endl << "Please enter a noun: ";
   cin >> noun;
   cout << endl << "Please enter preposition: ";
   cin >> preposition;
   cout << endl << "Please enter another preposition: ";
   cin >> preposition2;
   cout << endl << "Please enter another body part: ";
   cin >> bodyPart2;
   cout << endl << "Please enter a state of being: ";
   cin >> stateOfBeing1;
   
 //Measuring tape start
   cout << endl << measuringStick << endl;
 //Paragraph 1
   cout << pronoun << " must not " << emotion << ". ";
   cout << emotion << " is the " << bodyPart;
   cout << "-" << erAdj << ". " << endl << emotion;
   cout << " is the " << size << "-" << noun;
   cout << " that brings total obliteration. " <<endl << endl;
   
 //Paragraph 2
   cout << pronoun << " will face my " << emotion;
   cout << ". " << pronoun << "will permit ";
   cout << "it to pass " << endl << preposition << " me and ";
   cout << preposition2 << " me. " << "And when";
   cout << " it has gone past " << pronoun << " will" << endl;
   cout << "turn the inner " << bodyPart2 << " to see";
   cout << " its path. " << endl << endl;
   
 //Paragraph 3
   cout << "Where the ";
   cout << emotion << " has gone there will be ";
   cout << stateOfBeing1 << ". " << "Only ";
   cout << pronoun << endl << " will remain. ";
   cout << "That is the Litany of " << emotion << ". " << endl;
 //Measuring tape end
   cout << measuringStick << endl;
   
   return 0;
}