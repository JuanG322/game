#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;

int main()
{
    cout << "X";

    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = 4;
    dwPos.Y = 5;


    SetConsoleCursorPosition(hCon, dwPos);
    cout <<"X"<<endl;
    return 0;
}
