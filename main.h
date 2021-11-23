/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Gilday
 */

#include <iostream>

//Chapter 4, exercise #7 - (Program that acts similar to a mini-calculator. The program allows the user to input single digit numbers and one of four operators '+', '-', '*', '/')
int main() {
  std::string operation, op1, op2;
  double a, b, math;
  std::cout << "Input the first operand: ";
  std::cin >> op1;
  std::cout << "Input the second operand: ";
  std::cin >> op2;
  std::cout << "Input an operation: ";
  std::cin >> operation;

  //Verifies the input of the first operand.
  if(op1 == "1" || op1 == "one"){
    a = 1;
  }
  else if(op1 == "2" || op1 == "two"){
    a = 2;
  }
  else if(op1 == "3" || op1 == "three"){
    a = 3;
  }
  else if(op1 == "4" || op1 == "four"){
    a = 4;
  }
  else if(op1 == "5" || op1 == "five"){
    a = 5;
  }
  else if(op1 == "6" || op1 == "six"){
    a = 6;
  }
  else if(op1 == "7" || op1 == "seven"){
    a = 7;
  }
  else if(op1 == "8" || op1 == "eight"){
    a = 8;
  }
  else if(op1 == "9" || op1 == "nine"){
    a = 9;
  }

  //Verifies the input of the second operand.
  if(op2 == "1" || op2 == "one"){
    b = 1;
  }
  else if(op2 == "2" || op2 == "two"){
    b = 2;
  }
  else if(op2 == "3" || op2 == "three"){
    b = 3;
  }
  else if(op2 == "4" || op2 == "four"){
    b = 4;
  }
  else if(op2 == "5" || op2 == "five"){
    b = 5;
  }
  else if(op2 == "6" || op2 == "six"){
    b = 6;
  }
  else if(op2 == "7" || op2 == "seven"){
    b = 7;
  }
  else if(op2 == "8" || op2 == "eight"){
    a = 8;
  }
  else if(op2 == "9" || op2 == "nine"){
    b = 9;
  }

  //Verifies the input of the operation.
  if(operation == "+" || operation == "plus"){
    math = a + b;
    std::cout << "The computed value of: " << a << "+" << b << " is " << math;
  }
  else if(operation == "-" || operation == "minus"){
    math = a-b;
    std::cout << "The computed value of: " << a << "-" << b << " is " << math;
  }
  else if(operation == "*" || operation == "mul"){
    math = a*b;
    std::cout << "The computed value of: " << a << "*" << b << " is " << math;
  }
  else if(operation == "/" || operation == "div"){
    math = a/b;
    std::cout << "The computed value of: " << a << "/" << b << " is " << math;
  }
} 
