//  =============== BEGIN ASSESSMENT HEADER ================
/// @file mathematics.cpp 
/// @brief cs_private/cs010_assignments/assignment06
///
/// @author Matthew Lumantas [mluma001@ucr.edu]
/// @date May 18, 2015
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment, 
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//error reporting constants
const int OK = 0;
const int DIV_ZERO = 1;
const int SQRT_ERR = 2;

int division(double a, double b, double &result) {
   
   //check for division by zero
   if (b == 0) {
      return DIV_ZERO;
   }
   else {
      result = a / b;
      return OK;
   }
}

int quadratic(double a, double b, double c, double &root1, double &root2) {
   
   //check for division by zero
   if ( abs(a - 0) < 0.00001) {
      return 1;
   }
   
   //check for complex roots
   else if ( ((pow (b, 2)) - (4 * a * c)) < 0 ) {
      return 2;
   }
   
   //quadratic formula
   else {
      root1 = ((b * -1) - (sqrt ( (pow (b, 2)) - (4 * a * c) ))) / ( 2 * a);
      root2 = ((b * -1) + (sqrt ( (pow (b, 2)) - (4 * a * c) ))) / ( 2 * a);
      return 0;
   }
}

int pythagorean(double a, double b, double &c) {
   
   //pythagorean formula
   c = sqrt( pow(a,2) + pow(b, 2) );
   return OK;
}

//get numbers for particular operations
int acquireOperands(const string &op, double &x, double &y, double &z) {
   if (op == "division") {
      cout << "Enter your first number: ";
      cin >> x;
      cout << endl << "Enter your second number: ";
      cin >> y;
      cout << endl;
      return 2;
   }
   else if (op == "pythagorean") {
      cout << "Enter your first number: ";
      cin >> x;
      cout << endl << "Enter your second number: ";
      cin >> y;
      cout << endl;
      return 2;
   }
   else if (op == "quadratic") {
      cout << "Enter your first number: ";
      cin >> x;
      cout << endl << "Enter your second number: ";
      cin >> y;
      cout << endl << "Enter your third number: ";
      cin >> z;
      cout << endl;
      return 3;
   }
}

int main() {
   
   double x = 0.0;
   double y = 0.0;
   double z = 0.0;
   double result1 = 0.0;
   double result2 = 0.0;
   string userOp;
   
   //prompt until correct operation
   do {
      cout << "Please choose an operation: ";
      cin >> userOp;
      cout << endl;
      if ((userOp != "division")
         && (userOp != "pythagorean")
         && (userOp != "quadratic")) {
         cout << "Error: Operation not supported.\n";
      }
   } while((userOp != "division")
      && (userOp != "pythagorean")
      && (userOp != "quadratic"));
   acquireOperands(userOp, x, y, z);
   
   //division operation
   if (userOp == "division") {
      division(x, y, result1);
      cout << "Equation: " << x << " / " << y << endl;
      if (division(x, y, result1) == 1) {
         cout << "Error: Cannot divide by zero.\n";
      }
      else {
         cout << "Result: " << result1 << endl;
      }
   }
   
   //pythagorean operation
   else if (userOp == "pythagorean") {
      pythagorean(x, y, result1);
      cout << "Equation: sqrt(" << x << "^2 + " << y << "^2)\n";
      cout << "Result: " << result1 << endl;
   }
   
   //quadratic
   else {
      quadratic(x, y, z, result1, result2);
      cout << "Equation: " << x << "x^2 + " << y << "x + " << z << " = 0\n";
      if ( quadratic(x, y, z, result1, result2) == 1) {
         cout << "Error: Cannot divide by zero.\n";
      }
      else if ( quadratic(x, y, z, result1, result2) == 2) {
         cout << "Error: Cannot take square root of a negative number.\n";
      }
      else {
         //check if perfect square
         if ( result1 != result2) {
            cout << "Result: " << result1 << ", " << result2 << endl;
         }
         else {
            cout << "Result: " << result1 << endl;
         }
      }
   }
   return 0;
}