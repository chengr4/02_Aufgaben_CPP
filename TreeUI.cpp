/**
 @file main.cpp
 @author Feng-Shih Cheng 
 @date 08.04.2020
 @brief main.cpp
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include <math.h> 
#include "Node.h"

int child_layer = 1;
bool onlyForRoot = true;
// onyly used in print()
int current_layer = 0;
int Global_treeDepth = 4;
Node* tree;

// from second level, not from root
void createCompleteTree(int nrChildNodes,int treeDepth) {
  if(nrChildNodes<1||treeDepth<1)throw "error: wrong input!!";

  if(onlyForRoot){ // if root node
    Node *nodeRoot = new Node();
    cout<< nodeRoot->getName()<< endl;
    tree = nodeRoot;
    for(int i=0;i< nrChildNodes;i++) {
      Node* aNode = new Node();
      nodeRoot -> child_nodes.push_back(aNode);
      Node::children.push_back(aNode);
      cout<< aNode->getName();
    }
  onlyForRoot = false;
  cout << endl;

  } else {
    int& n = child_layer;
    int endNode = nrChildNodes*(pow(nrChildNodes, n)-1)/(nrChildNodes-1)-1;
    int beginNode = 1*(pow(nrChildNodes, n)-1)/(nrChildNodes-1)-1;
    for(int i=beginNode;i<= endNode;i++) {
      // call courrent node
      Node* currentNode = Node::children[i];

      for(int i=0;i< nrChildNodes;i++) {
        Node* aNode = new Node();
        currentNode -> child_nodes.push_back(aNode);
        Node::children.push_back(aNode);
        cout<< aNode->getName();
      }
    }
    n++;
    cout<< endl;
  }
  
  if(treeDepth==2) {
    cout << "create over" << endl;
    onlyForRoot = true;
  } else {
    createCompleteTree(nrChildNodes, treeDepth-1);
  }
}

/*oid print(ostream& str, Node* n) {
  
  if(onlyForRoot) {
    str << n -> getName() << endl;
    
  } else {
    for(int i=0;i< n->child_nodes.size();i++) {
      Node iterNode = *(n -> child_nodes[i]);
      str << iterNode.getName() << endl;
    }
    current_layer++;
  }

  
  vector<Node*> list = n->children;
  

  if(current_layer==Global_treeDepth) {
    return;
  } else {
    print(cout, n);
  }



}*/

int main() {
  
  // teil1
  /*
  Node *nodeRoot = new Node();
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
  */

 // teil2
 try {    
    createCompleteTree(3,Global_treeDepth);
    //print(cout, tree);
  } catch (const char* error) {
    cout << error << endl;
  }

}