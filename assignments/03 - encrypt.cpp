//  =============== BEGIN ASSESSMENT HEADER ================
/// @file cipher.cpp 
/// @brief cs_private/cs010_assignments/assignment03
///
/// @author Matthew Lumantas [mluma001@ucr.edu]
/// @date April 21, 2015
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment, 
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============

#include <iostream>

using namespace std;

int main() 
{
    
   string encryptMap;
   string userInput;
   string encryptOutput;
   char firstLetter;
   char encryptLetter;
    
   // get requested translation map
   cout << "What is the translation map "
      << "(type 'default' to use default): ";
   cin >> encryptMap;
   
   // detect if request default map 
   if (encryptMap == "default") {
      encryptMap = "zyxwvutsrqponmlkjihgfedcba";
   }
   // check for correct map size, exit if error
   else if (encryptMap.length() != 26) {
      cout << endl << "Error: invalid translation map size." << endl;
      return 0;
   }
   // FIXME debug encryptMap setting
   //cout << encryptMap << endl;
    
   // get word to be encrypted from user
   cout << endl << "What is the single word to translate: ";
   cin >> userInput;
   
   // check if first character is a lowercase letter
   firstLetter = userInput.at(0);
   if ((firstLetter - 96) > 0 && (firstLetter - 96) < 123 ) {
      encryptLetter = encryptMap.at(firstLetter - 97);
   }
   else {
      cout << endl << "Error: encryption cannot be performed." << endl;
      return 0;
   }
   
   // set and output encryption
   encryptOutput = encryptLetter + userInput.substr(1,userInput.length()-1);
   
   cout << endl << "Encrypted word: " << encryptOutput << endl;
   return 0;
}