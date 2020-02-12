//  main.cpp
//  Random Digit Guessing
//  Created by Price87 on 2/6/2 R.
//  Copyright © 2 Reiwa CS部. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c,num,level,times;
    num = 0;
    times = 0;
    a = rand() % 10;
    b = rand() % 20;
    c = rand() % 50;
    
    Question:
    cout << "What level do you want to be in?\n" <<"Level 1 is # under 10\nLevel 2 is # under 20\nLevel 3 is # under 50\ntype 1/2/3 to proceed\n";
    cin >> level;
    
    Level1Guess:
    if (level == 1){
        cout << "Make a guess\n";
        cin >> num;
        times = times + 1;
        if (num == a){
            cout << "You get it\n" << "You guessed "<< times << " times" <<".\n";
        }
        else{
            cout << "Not that, Try again\n";
            goto Level1Guess;
        }
    }
    
    Level2Guess:
    if (level == 2){
        cout << "Make a guess\n";
        cin >> num;
        times = times + 1;
        if (num == b){
            cout << "You get it\n" << "You guessed "<< times << " times" <<".\n";
        }
        else{
            cout << "Not that, Try again\n";
            goto Level2Guess;
        }
    }
    
    Level3Guess:
    if (level == 3){
        cout << "Make a guess\n";
        cin >> num;
        times = times + 1;
        if (num == c){
            cout << "You get it\n" << "You guessed "<< times << " times" <<".\n";
        }
        else{
            cout << "Not that, Try again\n";
            goto Level3Guess;
        }
    }
    
    Rematch:
    cout << "Do yo want to challenge the psuedo-random again?\n" << "Enter 0 to try again or 1 to stop\n";
    cin >> num;
    if (num == 0){
        times = 0;
        goto Question;
    }
    else{
        return 0;
    }
}
