#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

/*
30: Negro
31: Rojo
32: Verde
33: Amarillo
34: Azul
35: Magenta
36: Cyan
37: Blanco
"\x1b[34;12m"
*/

#define RED     "\x1b[31;12m"
#define GREEN   "\x1b[32;12m"
#define YELLOW  "\x1b[33;12m"
#define BLUE    "\x1b[34;12m"
#define cord_x 7

void gotoxy(int x,int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void marco1(){
    gotoxy(cord_x,1);printf(RED"*************************************\n");
    gotoxy(cord_x,2);printf(RED"*                                   *\n");
    gotoxy(cord_x,3);printf(RED"*                                   *\n");
    gotoxy(cord_x,4);printf(RED"*                                   *\n");
    gotoxy(cord_x,5);printf(RED"*                                   *\n");
    gotoxy(cord_x,6);printf(RED"*                                   *\n");
    gotoxy(cord_x,7);printf(RED"*                                   *\n");
    gotoxy(cord_x,8);printf(RED"*                                   *\n");
    gotoxy(cord_x,9);printf(RED"*                                   *\n");
    gotoxy(cord_x,10);printf(RED"*                                   *\n");
    gotoxy(cord_x,11);printf(RED"*                                   *\n");
    gotoxy(cord_x,12);printf(RED"*                                   *\n");
    gotoxy(cord_x,13);printf(RED"*                                   *\n");
    gotoxy(cord_x,14);printf(RED"*                                   *\n");
    gotoxy(cord_x,15);printf(RED"*************************************\n");
}

void marco_verde(){
    gotoxy(cord_x,1);printf(GREEN"*************************************\n");
    gotoxy(cord_x,2);printf(GREEN"*                                   *\n");
    gotoxy(cord_x,3);printf(GREEN"*                                   *\n");
    gotoxy(cord_x,4);printf(GREEN"*                                   *\n");
    gotoxy(cord_x,5);printf(GREEN"*                                   *\n");
    gotoxy(cord_x,6);printf(GREEN"*                                   *\n");
    gotoxy(cord_x,7);printf(GREEN"*                                   *\n");
    gotoxy(cord_x,8);printf(GREEN"*                                   *\n");
    gotoxy(cord_x,9);printf(GREEN"*                                   *\n");
    gotoxy(cord_x,10);printf(GREEN"*                                   *\n");
    gotoxy(cord_x,11);printf(GREEN"*                                   *\n");
    gotoxy(cord_x,12);printf(GREEN"*                                   *\n");
    gotoxy(cord_x,13);printf(GREEN"*                                   *\n");
    gotoxy(cord_x,14);printf(GREEN"*                                   *\n");
    gotoxy(cord_x,15);printf(GREEN"*************************************\n");
}


int main() {
    int tecla,cont=0,dec=0;
    system("cls");
    marco1();
    gotoxy(cord_x+3,3);printf(BLUE"ANALIZANDO COMPONENTES DEL AGUA\n");
    for (size_t i = 0; i < 9; i++)
    {   
        if (i<8)
        {
            gotoxy(cord_x+13,5+i);printf(GREEN"*\n");
            Sleep(300);
        }
        else{
            gotoxy(cord_x+13,5+i);printf(RED"*\n");
            Sleep(1000);
        }
        
        
    }
    for (size_t i = 0; i < 9; i++)
    {   
        if (i<8)
        {
            gotoxy(cord_x+15,5+i);printf(GREEN"*\n");
            Sleep(300);
        }
        else{
            gotoxy(cord_x+15,5+i);printf(RED"*\n");
            Sleep(1000);
        }
        
        
    }
    for (size_t i = 0; i < 9; i++)
    {   
        if (i<8)
        {
            gotoxy(cord_x+17,5+i);printf(GREEN"*\n");
            Sleep(300);
        }
        else{
            gotoxy(cord_x+17,5+i);printf(RED"*\n");
            Sleep(1000);
        }
        
        
    }
    system("cls");
    gotoxy(0,17);printf(YELLOW"instrcuciones cada vez que aparesca el punto rojo \nselecciona si(s) o no(n) simulando los test");
    marco1();
    gotoxy(cord_x+3,3);printf(BLUE"TESTEANDO COMPONENTES DEL AGUA\n");
    gotoxy(cord_x+3,5);printf(BLUE"TEST 1 \n");
    for (size_t i = 0; i < 9; i++)
    {     
        if (i<8)
        {
            gotoxy(cord_x+3+i,6);printf(GREEN"*\n");
            Sleep(300);
        }
        else{
            gotoxy(cord_x+3+i,6);printf(RED"*\n");
            Sleep(1000);
        }
        cont=i;
    }

    do
    {   
        tecla=getch();
        if(tecla==115 || tecla==83){
            gotoxy(cord_x+3+cont,6);printf(BLUE" CORRECTO\n");
            dec++;
        }
        if (tecla==110 || tecla==78)
        {
            gotoxy(cord_x+3+cont,6);printf(RED" INCORRECTO\n");
        }
    } while (tecla!=115 && tecla!=83 && tecla!=110 && tecla!=78);

    gotoxy(cord_x+3,7);printf(BLUE"TEST 2 \n");
    for (size_t i = 0; i < 9; i++)
    {   
        if (i<8)
        {
            gotoxy(cord_x+3+i,8);printf(GREEN"*\n");
            Sleep(300);
        }
        else{
            gotoxy(cord_x+3+i,8);printf(RED"*\n");
            Sleep(1000);
        }
        cont=i;
        
    }

    do
    {   
        tecla=getch();
        if(tecla==115 || tecla==83){
            gotoxy(cord_x+3+cont,8);printf(BLUE" CORRECTO\n");
            dec++;
        }
        if (tecla==110 || tecla==78)
        {
            gotoxy(cord_x+3+cont,8);printf(RED" INCORRECTO\n");
        }
    } while (tecla!=115 && tecla!=83 && tecla!=110 && tecla!=78);

    gotoxy(cord_x+3,9);printf(BLUE"TEST 3 \n");
    for (size_t i = 0; i < 9; i++)
    {   
        if (i<8)
        {
            gotoxy(cord_x+3+i,10);printf(GREEN"*\n");
            Sleep(300);
        }
        else{
            gotoxy(cord_x+3+i,10);printf(RED"*\n");
            Sleep(1000);
        }
        
        cont=i;
    }

    do
    {   
        tecla=getch();
        if(tecla==115 || tecla==83){
            gotoxy(cord_x+3+cont,10);printf(BLUE" CORRECTO\n");
            dec++;
        }
        if (tecla==110 || tecla==78)
        {
            gotoxy(cord_x+3+cont,10);printf(RED" INCORRECTO\n");
        }
    } while (tecla!=115 && tecla!=83 && tecla!=110 && tecla!=78);

    gotoxy(cord_x+3,11);printf(BLUE"TEST 4 \n");
    for (size_t i = 0; i < 9; i++)
    {   
        if (i<8)
        {
            gotoxy(cord_x+3+i,12);printf(GREEN"*\n");
            Sleep(300);
        }
        else{
            gotoxy(cord_x+3+i,12);printf(RED"*\n");
            Sleep(1000);
        }
        
        cont=i;
    }

    do
    {   
        tecla=getch();
        if(tecla==115 || tecla==83){
            gotoxy(cord_x+3+cont,12);printf(BLUE" CORRECTO\n");
            dec++;
        }
        if (tecla==110 || tecla==78)
        {
            gotoxy(cord_x+3+cont,12);printf(RED" INCORRECTO\n");
        }
    } while (tecla!=115 && tecla!=83 && tecla!=110 && tecla!=78);
    system("cls");
    if(dec==4){
        marco_verde();
        gotoxy(cord_x+3,8);printf(GREEN" EL AGUA PASO LAS PUREBAS\n");
    }
    else{
        marco1();
        gotoxy(cord_x+3,8);printf(RED"  EL AGUA NO PASO LAS PUREBAS\n");
    }
    getch();
    return 0;
}
