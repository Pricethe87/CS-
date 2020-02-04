//  main.cpp
//  Created by Price87 on 1/22/2 R.
//  Copyright © 2 Reiwa CS部. All rights reserved.
//  令和二年二月四日
//  Coded in C++
//
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    
    int pieces = 0;
    int num = 0, dum = 0;
    int numbers[pieces], sum = 0;
    int odd[pieces], ssum = 0;
    int even[pieces], sssum = 0;
    cout << "How many numbers?"<< "\n";       //有关询问信息
    cin >> pieces;
    cout << "Type the numbers" << "\n";
    
    for (int i = 0; i < pieces; i++)          //输入数组数据
    {
        cin >> numbers[i];
        sum += numbers[i];
        if (i % 2 == 0){
            num = num + 1;
            sssum += even[i];
        }
        else{
            dum = dum + 1;
            ssum += odd[i];
        }
    }
    
    cout << "Do you want the odd sum & mean or even sum & mean?" << "\n" << "Type odd # or even # to continue" << "\n";
    int Judge;
    cin >> Judge;
    if (Judge % 2 == 0)                          //判断数据奇偶性
        cout << "You choosed even result and they are: " << "\n" << sssum << "  " << sssum/num <<endl;
    else if (Judge % 2 == 1)
        cout << "You choosed odd result and they are: " << "\n" << ssum << "  " << ssum/dum <<endl;
    else
        cout << "Please enter a number!";
    
 return 0;
}
