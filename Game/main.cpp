#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

void gotoxy(int x,int y){

    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;

    SetConsoleCursorPosition(hCon, dwPos);

}

void OCursor(){
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 15;
    cci.bVisible = FALSE;

    SetConsoleCursorInfo(hCon,&cci);
}

class Avion{
    int x,y;
public:
    Avion(int _x, int _y);
    void pintar();
    void borrar();
    void mover();

};

void Avion::pintar(){
    gotoxy(x,y);cout<<"    /\";
    gotoxy(x,y+1);cout<<" ___||___";
    gotoxy(x,y+2);cout<<"/___||___\";
    gotoxy(x,y+3);cout<<"    ||";
    gotoxy(x,y+4);cout<<"  __/\__";

}

void Avion::borrar(){
    gotoxy(x,y); cout<<"           ";
    gotoxy(x,y+1); cout<<"           ";
    gotoxy(x,y+2); cout<<"           ";
    gotoxy(x,y+3); cout<<"           ";
    gotoxy(x,y+4); cout<<"           ";
}

void Avion::mover(){
    if(kbhit()){
        char tecla = getch();
        borrar();
        if(tecla == 'a') x--;
        if(tecla == 'd') x++;
        if(tecla == 'w') y--;
        if(tecla == 's') y++;
        pintar();
}


int main(){

    OCursor();
    int x = 10,y = 10;
    gotoxy(x,y);cout<<"x";

    bool game_over = false;
    while(!game_over){

        Sleep(15);
        }
    return 0;
}
