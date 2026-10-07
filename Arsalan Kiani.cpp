#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y) 
{ 
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console,CursorPosition);
}
int main()
{
    int i,j;
    for(i=2,j=8;j>=2;j--)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=2,j=2; i<=8;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=8,j=2; j<=8;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=2,j=5; i<=8;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=10,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=10,j=2;i<=16;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=16,j=2;j<=5;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=10,j=5;i<=16;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=11,j=5;i<=16,j<=8;i++,j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=24,j=2;i>=18;i--)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=18,j=2;j<=5;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=18,j=5;i<=24;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=24,j=5;j<=8;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=18,j=8;i<=24;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=26,j=8;j>=2;j--)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=26,j=2;i<=32;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=32,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=26,j=5;i<=32;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=34,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=34,j=8;i<=40;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=42,j=8;j>=2;j--)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=42,j=2;i<=48;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=48,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }

    for(int i=42,j=5;i<=48;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=50,j=8;j>=2;j--)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=50,j=2;i<=56,j<=8;i++,j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=56,j=8;j>=2;j--)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=2,j=11;j<=17;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=2,j=14;i<=8,j>=11;i++,j--)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=2,j=14;i<=8,j<=17;i++,j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=10,j=11;i<=16;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=13,j=11;j<=17;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=10,j=17;i<=16;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=18,j=17;j>=11;j--)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=18,j=11;i<=24;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=24,j=11;j<=17;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=18,j=14;i<=24;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=26,j=17;j>=11;j--)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=26,j=11;i<=32,j<=17;i++,j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=32,j=17;j>=11;j--)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=34,j=11;i<=40;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=37,j=11;j<=17;j++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    for(int i=34,j=17;i<=40;i++)
    {
        Sleep(100);
        system("color 40");
        gotoxy(i,j);
        cout<<"*";
    }
    getch();
}