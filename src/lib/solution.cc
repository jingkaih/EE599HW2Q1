#include "solution.h"

int Solution::Add (int num1, int num2) 
{ 
  return num1 + num2; 
}

std::string Solution::Add (std::string str1, std::string str2)
{
  return str1 + str2;
}

std::string Solution::Add (std::string str1, int num2)
{
  return str1 + std::to_string(num2);
}

std::string Solution::Add (int num1, std::string str2)
{
  return std::to_string(num1) + str2;
}