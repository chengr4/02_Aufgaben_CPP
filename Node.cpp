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


// initial static attribute
vector<Node*> Node::children(0);

// constructor
Node::Node(const string& n): name(n) {
  left_node =0L; 
  right_node =0L;
  DEBUG(n);
}

Node::Node() {
  left_node =0L; 
  right_node =0L;
}

// destructor
Node::~Node() {
  cout << "enter ~node() of " << getName() << endl;
  if(left_node!=NULL)
    left_node->~Node();
  if(right_node!=NULL)
    right_node->~Node();
  
  cout << "leave ~node() of " << getName() << endl;
}

// method
string Node::getName() const {
  return name;
}

void Node::setName(string s) {
  name = s;
}

void Node::getNrOfChildren() const {
  cout << "number of children : " << children.size() << endl;
}

Node* Node::getChild(int i) const {
  
  return children[i-1];
}

void Node::addChild(Node* child) {

  if(left_node == NULL) {
    left_node = child;
    children.push_back(child);
  } else if(right_node == NULL) {
    
    right_node = child;
    children.push_back(child);
  } else {
    throw "error: The node is already full";
  }
}

