#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>

class Solution {
public:
  int Add (int num1, int num2);
  std::string Add (std::string str1, std::string str2);
  std::string Add (std::string str1, int num2);
  std::string Add (int num1, std::string str2);
};

#endif