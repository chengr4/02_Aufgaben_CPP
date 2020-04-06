/**
 @file main.cpp
 @author Feng-Shih Cheng 
 @date 0.0.0
 @brief 
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;


#include "Node.h"

int main() {
  Node *nodeRoot = new Node("root");
  Node *nodeA = new Node("left");
  Node *nodeB = new Node("right");


  try {    
    nodeRoot->addChild(nodeA);
    nodeRoot->addChild(nodeB);
  } catch (const char* error) {
        cout << error << endl;
    }
  


  nodeRoot->getNrOfChildren();
  cout << nodeRoot->getChild(2) << endl;

  delete nodeRoot;
  
}