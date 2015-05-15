//  =============== BEGIN ASSESSMENT HEADER ================
/// @file ISBN.cpp 
/// @brief cs_private/cs010_assignments/assignment02
///
/// @author Matthew Lumantas [mluma001@ucr.edu]
/// @date April 9, 2015
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment, 
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============

#include <iostream>

using namespace std;

int main() 
{
    
    int isbn9Digit;
    int digit1, digit2, digit3, digit4, digit5, 
        digit6, digit7, digit8, digit9;
    int weightedSum;
    int checksum;
   
    //get 9 digit ISBN from user
    
    cout << "Please enter the first 9 digits of the ISBN: ";
    cin >> isbn9Digit;
    
    //separate ISBN into individual digits
        // mod 10, 100, 100, etc to get individual digits
    digit9 = isbn9Digit % 10 / 1;
    digit8 = isbn9Digit % 100 / 10;
    digit7 = isbn9Digit % 1000 / 100;
    digit6 = isbn9Digit % 10000 / 1000;
    digit5 = isbn9Digit % 100000 / 10000;
    digit4 = isbn9Digit % 1000000 / 100000;
    digit3 = isbn9Digit % 10000000 / 1000000;
    digit2 = isbn9Digit % 100000000 / 10000000;
    digit1 = isbn9Digit % 1000000000 / 100000000;
    
    
    /*cout << digit1 << endl << digit2 << endl << digit3 << endl << digit4
        << endl << digit5 << endl << digit6 << endl << digit7 << endl 
        << digit8 << endl << digit9; */
    //do weighted sum
    weightedSum = digit1 + 2 * digit2 + 3 * digit3 + 4 * digit4 + 5 * digit5
        + 6 * digit6 + 7 * digit7 + 8 * digit8 + 9 * digit9;
    
    
   // mod 11
    checksum = weightedSum % 11;
    
   // output checksum
    cout << "Checksum: " << checksum << endl;
    
    
    
  
    return 0;
}