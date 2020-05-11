//
//  main.cpp
//  Hangman
//
//  Created by Price87 on 4/29/2 R.
//  Copyright © 2 Reiwa CS部. All rights reserved.
//

#include <iostream>
using namespace std;
void PrintMessage(string message, bool printTop = true, bool printBottom = true)
{
    if (printTop)
    {
        cout << "+----------------------------+" <<endl;
        cout << "|";
    }
    else
    {
        cout << "|";
    }
    bool front = true;
    for (int i = message.length(); i < 28; i++)
    {
        if (front)
        {
            message = " " + message;
        }
        else
        {
            message = message + " ";
        }
        front = !front;
    }
    cout << message.c_str();
    
    if(printBottom)
    {
        cout<<"|"<<endl;
        cout<<"+----------------------------+"<<endl;
    }
    else
    {
        cout << "|" << endl;
    }
}
void DrawHangman(int guessCount = 0)
{
    if(guessCount >= 1)
        PrintMessage("|",false,false);
    else
        PrintMessage("", false,false);
    
    if(guessCount >= 2)
        PrintMessage("|",false,false);
    else
        PrintMessage("", false,false);
    
    if(guessCount >= 3)
           PrintMessage("0",false,false);
       else
           PrintMessage("", false,false);
    
    if(guessCount == 4)
        PrintMessage(" / ",false,false);
    
    if(guessCount == 5)
        PrintMessage(" /| ",false,false);
    
    if(guessCount >= 6)
        PrintMessage(" /|\\ ",false,false);
    else
        PrintMessage("",false,false);
    
    if(guessCount == 7)
        PrintMessage(" / ",false,false);
    
    if(guessCount >= 8)
        PrintMessage(" / \\ ",false,false);
    else
        PrintMessage("",false,false);
}
int main() {
    PrintMessage("HANGMAN");
    DrawHangman(8);
    getchar();
    return 0;
}
/*成品图
+----------------------------+
|           HANGMAN          |
+----------------------------+
|              |             |
|              |             |
|              0             |
|            / | \           |
|             / \            |
+----------------------------+
|        USE ALPHABETS       |
+----------------------------+
*/
