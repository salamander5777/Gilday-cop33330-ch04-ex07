/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Gilday
 */

#include "main.h"

int main() {
  std::string operation, op1, op2;
  double a, b;
  std::cout << "Input the first operand: ";
  std::cin >> op1;
  std::cout << "Input the second operand: ";
  std::cin >> op2;
  std::cout << "Input an operation: ";
  std::cin >> operation;
  
  a = operand1(op1);
  b = operand2(op2);
  solution(operation, a, b);
}
