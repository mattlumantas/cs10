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
    // ask for User's name
    // get User's name
    // ask about nice days
    // ask for User's nice day count
    // get User's nice day count
    // double the nice day count
    // respond to user
    string userName;
    int niceDaysWanted = 0;
    int niceDaysGiven = 0;
    cout << "Good day, what is your name? " << endl;
    cin >> userName;
    
    cout << "How many nice days would you like, " << userName << "? " << endl;
    cin >> niceDaysWanted;
    niceDaysGiven = 2 * niceDaysWanted ;
    cout << "Hi, " << userName << ", have ";
    cout << niceDaysGiven << " wonderful days!" << endl;
    
    
    
    
    return 0;
}