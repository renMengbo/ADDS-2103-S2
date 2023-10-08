#include "BigNumCalc.h"
#include <iostream>  
#include <list>  
#include <string>
# include <iostream>
  
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

    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();

    while (it1 != num1.rend() && it2 != num2.rend()) {
//        cout <<"+: " << *it1 << "--" << *it2 <<endl;
        int sum = *it1 + *it2 + carry;  
        carry = sum / 10;  
        result.push_back(sum % 10);  
        ++it1;
        ++it2;
    }

    // Add remaining elements from the longer list
    while (it1 != num1.rend()) {
//        cout <<"+: " << *it1 << "--" << "*it2" <<endl;
        int sum = *it1 + carry;  
        carry = sum / 10;  
        result.push_back(sum % 10);  
        ++it1;
    }

    while (it2 != num2.rend()) {
//        cout <<"+: " << "*it1" << "--" << *it2 <<endl;
        int sum = *it2 + carry;  
        carry = sum / 10;  
        result.push_back(sum % 10);  
        ++it2;
    }
    
    if (carry > 0) {  
        result.push_back(carry);  
    }  

    result.reverse();
    return result;
}

  
std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {  
    
    std::list<int> result;  

     int borrow = 0;  
   
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();

    while (it1 != num1.rend() && it2 != num2.rend()) {
//       cout <<"+: " << *it1 << "--" << *it2 <<endl;
        int difference = *it1 - *it2 - borrow;  
        if (difference < 0) {  
            difference += 10;  
            borrow = 1;  
        } else {  
            borrow = 0;  
        }  
        result.push_back(difference); 
        ++it1;
        ++it2;
    }

    // Add remaining elements from the longer list
    while (it1 != num1.rend()) {
//        cout <<"+: " << *it1 << "--" << "*it2" <<endl;
        int difference = *it1 - borrow;  
        if (difference < 0) {  
            difference += 10;  
            borrow = 1;  
        } else {  
            borrow = 0;  
        }  
        result.push_back(difference); 
        ++it1;
    }

    result.reverse();
      
    return result;  
}  
  
std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {  

    std::list<int> result;  
    int carry = 0;  

    auto it1 = num1.rbegin();

    while (it1 != num1.rend() ) {
        auto it2 = num2.rbegin();
        cout <<"*it1 : " << *it1 << endl;
        while (it2 != num2.rend()) {
        int product = (*it1) * (*it2) + carry; 
        carry = product / 10;  
        result.push_back(product % 10);  
 //                       cout <<"*it2 : "  << *it2 << " product: --" << product<< " carry: --"<< carry << " push_back: --"<< product % 10 <<endl; 
        ++it2;
        }
        ++it1;
    }

  
    if (carry > 0) {  
        result.push_back(carry);  
    }  

    result.reverse();
      
    return result;      
}