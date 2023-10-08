#include "BigNumCalc.h"
#include <iostream>  
#include <list>  
#include <string>
  
using namespace std;    
 
std::list<int> BigNumCalc::buildBigNum(std::string numString) {  
    std::list<int> result;  
    for (char c : numString) {  
        result.push_back(c - '0');  
    }  
    return result;  
}  
  
std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {  
    std::list<int> result;  
    int carry = 0;  
      
    for (int i = 0; i < max(num1.size(), num2.size()); i++) {  
        int digit1 = i < num1.size() ? num1.back() : 0;  
        int digit2 = i < num2.size() ? num2.back() : 0;  
        int sum = digit1 + digit2 + carry;  
        carry = sum / 10;  
        result.push_back(sum % 10);  
        num1.pop_back();  
        num2.pop_back();  
    }  
      
    if (carry > 0) {  
        result.push_back(carry);  
    }  
      
    return result;  
}  
  
std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {  
    std::list<int> result;  
    int borrow = 0;  
      
    for (int i = 0; i < num1.size(); i++) {  
        int digit1 = num1.back();  
        int digit2 = i < num2.size() ? num2.back() : 0;  
        int difference = digit1 - digit2 - borrow;  
        if (difference < 0) {  
            difference += 10;  
            borrow = 1;  
        } else {  
            borrow = 0;  
        }  
        result.push_back(difference);  
        num1.pop_back();  
        if (i < num2.size()) {  
            num2.pop_back();  
        }  
    }  
      
    return result;  
}  
  
std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {  
    std::list<int> result;  
    int carry = 0;  
      
    for (int i = 0; i < num1.size(); i++) {  
        int digit1 = num1.back();  
        for (int j = 0; j < num2.size(); j++) {  
            int digit2 = num2.back();  
            int product = digit1 * digit2 + carry;  
            carry = product / 10;  
            result.push_back(product % 10);  
        }  
        num1.pop_back();  
        num2.pop_back();  
    }  
      
    while (carry > 0) {  
        result.push_back(carry);  
        carry /= 10;  
    }  
      
    return result;  
}