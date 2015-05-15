//  =============== BEGIN ASSESSMENT HEADER ================
/// @file cipher.cpp 
/// @brief cs_private/cs010_assignments/assignment04
///
/// @author Matthew Lumantas [mluma001@ucr.edu]
/// @date April 28, 2015
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment, 
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============

#include <iostream>

using namespace std;

int main() 
{
   string mode;
   string encryptMap;
   string userInput;
   string encryptOutput;
   char iInputChar;
   //char iEncryptChar;
   //char iDecryptChar;
   int i = 0;
    
   //get mode of script
   cout << "What is the method (encryption or decryption)? ";
   cin >> mode;
   cout << endl;
   
   //check mode input
   if ((mode == "encryption") || (mode == "decryption")) {
   }   
   else {  
      cout << "Error: invalid method choice." << endl;
      return 0;
   }
   
   
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
   
   // check if input word is in lowercase
   if (mode == "encryption") {
      for (i = 0; i <= userInput.length() - 1; ++i ) {
         iInputChar = userInput.at(i);
         if ((iInputChar - 96) > 0 && (iInputChar - 96) < 123 ) {
         }
         else {
            cout << endl << "Error: encryption cannot be performed." << endl;
            return 0;
         }
      }
   }
   else {
      for (i = 0; i <= userInput.length() - 1; ++i ) {
         iInputChar = userInput.at(i);
         if (encryptMap.find(iInputChar) != string::npos) {
         }
         else {
            cout << endl << "Error: decryption cannot be performed." << endl;
            return 0;
         }
      }
   }
   
   if (mode == "encryption") {
      for (i = 0; i <= userInput.length()-1; ++i) {
         userInput.at(i) = encryptMap.at(userInput.at(i) - 97);
      }
      cout << endl << "Encrypted word: " << userInput << endl; 
   }
   else {
      for  (i = 0; i <= userInput.length()-1; ++i) {
         userInput.at(i) = encryptMap.find(userInput.at(i)) + 97;
      }
      cout << endl << "Decrypted word: " << userInput << endl;
   }
   return 0;
}