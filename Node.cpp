/**
 @file Node.cpp
 @author Feng-Shih Cheng 
 @date 
 @brief 
*/

#include <iostream>
#include <string>
#include "Node.h"
using namespace std;

string Node::getName() const {
  return name;
}

void Node::setName(string s) {
  name = s;
}

