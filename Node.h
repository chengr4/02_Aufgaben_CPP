/**
 @file Node.h
 @author Feng-Shih Cheng 
 @date 0.0.0
 @brief 
*/

#ifndef _NODE_H_
#define _NODE_H_
#include <string>
using namespace std;


class Node {
  private:
  string name;

  // Klassenattribute
  static int zugriffe; 

  public:
  // Deklaration der Konstruktoren
  Node();

  // Deklaration des Destruktors
  ~Node();


  // Elementfunktionen der Klasse "Node"

  // die nur lesend auf die Daten eines Objektes zugreifen dürfen (read only) -> use const
  string getName() const;

  void setName(string s);

  int getNrOfChildren() const;

  Node getChild(int i) const; 
  
  void addChild(Node child);



}; // Semicolon!!!!!

#endif