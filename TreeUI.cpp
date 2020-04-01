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




int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}