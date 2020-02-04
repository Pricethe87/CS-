//  main.cpp
//  Created by Price87 on 1/22/2 R.
//  Copyright © 2 Reiwa CS部. All rights reserved.
//  令和二年二月四日
//  Coded in C++
//
#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;
int main() {
    
    int pieces = 0;
    int evennum = 0, oddnum = 0;
    int numbers[pieces];
    int odd[pieces], oddsum = 0;
    int even[pieces], evensum = 0;
    cout << "How many numbers?"<< "\n";       //有关询问信息
    cin >> pieces;
    //-------------------------------------------------------------
    cout << "Type the numbers" << "\n";
    for (int i = 0; i < pieces; i++)          //输入数组数据
    {
        cin >> numbers[i];                    //识别输入数据奇偶性并通过if selection分类
        if (numbers[i] % 2 == 0){             //若为偶数
            numbers[i] = even[i];
            evennum = evennum + 1;
            evensum += even[i];
        }
        else{                                 //若为奇数
            oddnum = oddnum + 1;
            oddsum += odd[i];
        }
    }
    
    //-------------------------------------------------------------
    
    FinalJudge:
    cout << "Do you want the odd sum & mean or even sum & mean?" << "\n" << "\n" << "Type odd # or even # to continue" << "\n";
    int Judge;
    cin >> Judge;
    if (Judge % 2 == 0){                          //判断数据奇偶性
        cout << "You choosed even result and they are: " << "\n" << evensum << "  " << evensum/evennum <<endl;
    }
    else{
        cout << "You choosed odd result and they are: " << "\n" << oddsum << "  " << oddsum/oddnum <<endl;
    }
    
 return 0;
}
``
