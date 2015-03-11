#include<iostream.h>
#include<graphics.h>

int main()
{
      
  initwindow(1000,700);
  top:
  int x(0),y(0);
  
  while (!ismouseclick(WM_LBUTTONDOWN))
        {
            setfillstyle(SOLID_FILL, RED);
            rectangle(0,0,1000,700);
            floodfill(0,0,RED);
            readimagefile("logo.bmp",0,0,80,80);
            settextstyle(9,HORIZ_DIR,6);
            setbkcolor(WHITE);
            setcolor(BLACK);
            outtextxy(400,10,"BILL");
            settextstyle(9,HORIZ_DIR,3);
            outtextxy(20,100,"Particulars");
            outtextxy(300,100,"Qty");
            outtextxy(500,100,"Rate(in Rs.)");
            outtextxy(800,100,"Amount");
            //if qty is >0,print the item name ......etc
            
        }   
}
