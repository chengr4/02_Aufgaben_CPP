/**
 @file Node.h
 @author Feng-Shih Cheng 
 @date 08.04.2020
 @brief Node.h
*/

#ifndef _NODE_H_
#define _NODE_H_
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#ifndef DEBUG_BUILD
#define DEBUG(x) do { cerr << "New node created: "<< x << endl; } while (0)
#endif

class Node {
  private:
  string name;

  Node* left_node; 
  Node* right_node;

  

  
  static int nodeID;

  public:

  static vector<Node*> children;
  // fuer Rekursive Baumerstellung
  vector<Node*> child_nodes;
  
  // Deklaration der Konstruktoren
  Node();
  // Um welche Art Parameterübergabe handelt es sich hier? -> call by reference
  // Warum günstig? -> Reduzieren den Speicherplatz
  Node(const string& n);

  // Deklaration des Destruktors
  // guarantees that the object of derived class is destructed properly.
  virtual ~Node();


  // Elementfunktionen der Klasse "Node"

  // die nur lesend auf die Daten eines Objektes zugreifen dürfen (read only) -> use const
  string getName() const;

  void setName(string s);

  void getNrOfChildren() const;

  Node* getChild(int i) const; 
  
  void addChild(Node* child);

  

//  vector<Node*> getNodeVector();

}; // Semicolon!!!!!

void print(ostream& str, Node* n);

void createCompleteTree(int nrChildNodes,int treeDepth);

#endif