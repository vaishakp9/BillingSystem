#ifndef GRAPHICS_INPUT
#define GRAPHICS_INPUT

#include <graphics.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void inputFromScreen(int &inputNumber);
void inputFromScreen(char inputText[]);

void getDaText(char buffer[], bool strNotInt = 1 , int fore=WHITE, int back=BLACK,int limit=80)
{
    int x = getx();
    int y = gety();
    int i=0;
    string tempString;
    char tempCharArray[limit];
    setcolor(fore);
    setfillstyle(1,back);

    while ( 1 ) {
           char ch = getch();
           if (i<limit && (strNotInt || (ch >= '0' && ch <= '9'))) {
                   tempString.push_back(ch);
                   i++;
                   //Clear out previous stuff

                   setcolor(back);
                   setfillstyle(1,back);
                   int a[8];
                   int tempX = getx(), tempY = gety() + textheight("0");
                   a[0]=x;
                   a[1]=y;
                   a[2]=tempX;
                   a[3]=y;
                   a[4]=tempX;
                   a[5]=tempY;
                   a[6]=x;
                   a[7]=tempY;
                   fillpoly(4,a);
                   moveto(x,y);


                   //Output new stuff

                   setcolor(fore);
                   strcpy(tempCharArray,tempString.c_str());
                   outtext(tempCharArray);
           }
           else if( ch==8 )        //code for Backspace
           {
                   if(i>0)
                   {
                           tempString.resize(tempString.length() - 1);
                           i--;
                           //Clear out previous stuff

                           setcolor(back);
                           setfillstyle(1,back);
                           int a[8];
                           int tempX = getx(), tempY = gety() +
textheight("0");
                           a[0]=x;
                           a[1]=y;
                           a[2]=tempX;
                           a[3]=y;
                           a[4]=tempX;
                           a[5]=tempY;
                           a[6]=x;
                           a[7]=tempY;
                           fillpoly(4,a);
                           moveto(x,y);


                           //Output new stuff

                           setcolor(fore);
                           strcpy(tempCharArray,tempString.c_str());
                           outtext(tempCharArray);
                   }
           }
           else if( ch==13 )       //The Enter key was pressed.
           {                       //You can put a similar exit
                   break;          //for Esc key (ch==27)
           }
   }
   setcolor(fore);
   strcpy(buffer, tempString.c_str());
}

void inputFromScreen(int &inputNumber){
    char buffer[80];
    getDaText(buffer,0);



    inputNumber = atoi(buffer);
}

void inputFromScreen(char inputText[]){
    getDaText(inputText);



}

#endif
