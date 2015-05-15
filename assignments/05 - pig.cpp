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
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int genRandInt(int minDieRoll, int maxDieRoll) {
   int dieRoll = 0;
   //set maximum and minimum values and roll
   dieRoll = (rand() % (maxDieRoll - minDieRoll + 1)) + minDieRoll;
   return dieRoll;
}

int singleTurn(int userHold) {
   int curScore = 0;
   int rollScore = 0;
   while (curScore < userHold) {       //while not yet at the hold value
      rollScore = genRandInt(1, 6);    //roll again
      if (rollScore == 1) {            //loss check
         curScore = 0;                 //if lost, lose all points
         return curScore;
      }
      curScore += rollScore;           //loop iteration add
   }
   return curScore;
}

int main() {

   //seed RNG
   srand(time(0));

   int userHold = 0;
   int numSims = 0;
   int turnScore = 0;
   int userHold1 = 0, userHold2 = 0,
      userHold3 = 0, userHold4 = 0, userHold5 = 0;
   int numLose = 0, numHold = 0, numHold1 = 0,
      numHold2 = 0, numHold3 = 0, numHold4 = 0, numHold5 = 0;

   //request hold value
   cout << "What value should we hold at? ";
   cin >> userHold;
   cout << endl;

   //set possible scores after hold
   userHold1 = userHold + 1;
   userHold2 = userHold + 2;
   userHold3 = userHold + 3;
   userHold4 = userHold + 4;
   userHold5 = userHold + 5;

   //request number of simulations
   cout << "Hold-at-N turn simulations? ";
   cin >> numSims;
   cout << endl;

   //run simulations
   for (int i = 1; i <= numSims; ++i) {
      turnScore = singleTurn(userHold);

      //record simulation iteration score
      if (turnScore == 0) {               //if rolled a one and lost
         ++numLose;
      }
      else if (turnScore == userHold) {   //if rolled exactly on the hold
         ++numHold;
      }
      else if (turnScore == userHold1) {  //if rolled one above the hold
         ++numHold1;
      }
      else if (turnScore == userHold2) {  //if rolled two above the hold
         ++numHold2;
      }
      else if (turnScore == userHold3) {  //if rolled three above the hold
         ++numHold3;
      }
      else if (turnScore == userHold4) {  //if rolled four above the hold
         ++numHold4;
      }
      else if (turnScore == userHold5) {  //if rolled five above the hold
         ++numHold5;
      }
   }

   //output chart of scores and percentages
   cout << "Score" << '\t' << "Estimated Probability" << endl;
   cout << '0' << '\t' << fixed << setprecision(6)
      <<  numLose / static_cast<double>(numSims) << endl;
   cout << userHold << '\t' << fixed << setprecision(6)
      <<  numHold / static_cast<double>(numSims) << endl;
   cout << userHold1 << '\t' << fixed << setprecision(6)
      <<  numHold1 / static_cast<double>(numSims) << endl;
   cout << userHold2 << '\t' << fixed << setprecision(6)
      <<  numHold2 / static_cast<double>(numSims) << endl;
   cout << userHold3 << '\t' << fixed << setprecision(6)
      <<  numHold3 / static_cast<double>(numSims) << endl;
   cout << userHold4 << '\t' << fixed << setprecision(6)
      <<  numHold4 / static_cast<double>(numSims) << endl;
   cout << userHold5 << '\t' << fixed << setprecision(6)
      <<  numHold5 / static_cast<double>(numSims) << endl;


   /* debug code
   min max roll testing
   cout << "Please enter the minimum roll: ";
   cin >> minDieRoll;
   cout << endl;

   cout << "Please enter the maximum roll: ";
   cin >> maxDieRoll;
   cout << endl;


   rand() testing
   for (int i = 0; i < 25; ++i) {
      cout << genRandInt(minDieRoll, maxDieRoll) << ' ';
   }

   FIXME test turnScore results
      cout << turnScore << endl;

   check numSims memory
   cout << numLose << ' ' << numHold << ' ' << numHold1 << ' ' << numHold2
      << ' ' << numHold3 << ' ' << numHold4 << ' ' << numHold5 << endl;

   user requested hold testing
   cout << singleTurn(userHold) << endl;

   */

   return 0;
}