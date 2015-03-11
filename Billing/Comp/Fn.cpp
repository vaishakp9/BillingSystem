#include<iostream.h>
#include<graphics.h>
int accept(char a[],int cost,int amt)
{
     initwindow(400,400);
     int x1(0),y1(0);
     while (!ismouseclick(WM_LBUTTONDOWN))
     {
            setfillstyle(SOLID_FILL, RED);
            rectangle(0,0,400,400);
            floodfill(0,0,RED);
            readimagefile("logo.bmp",0,0,100,100);
            outtextxy(200,200,"How Many ?");
            int r=getch();
            r=r-48;
            outtextxy(200,200,"*");
            amt=r*cost;
            //4outtextxy(200,200,amt);
     }        
   return 0;
}            
      
