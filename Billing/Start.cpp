#include<iostream.h>
#include<graphics.h>

int maina();
int mainb();
int mainc();
int maind();
int mainx();
int mainbill();

#include"main_menu.cpp"

int main()
{
      
  initwindow(1000,650);
  top:
  int x(0),y(0);
  
  while (!ismouseclick(WM_LBUTTONDOWN))
        {
            setfillstyle(SOLID_FILL, RED);
            rectangle(0,0,1000,650);
            floodfill(0,0,RED);
            readimagefile("logo.bmp",400,10,600,210);
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(200,370,800,430);
            floodfill(201,371,WHITE);
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(200,520,800,580);
            floodfill(201,521,WHITE);
            settextstyle(9,HORIZ_DIR,5);
            setbkcolor(WHITE);
            outtextxy(100,250,"WELCOME TO MacDONALDS");
            settextstyle(9,HORIZ_DIR,4);
            setpalette(0,0);            
            setbkcolor(WHITE);
            setcolor(BLACK);
            outtextxy(225,379,"Click here to go to main menu \n");
            outtextxy(350,529,"Click here to exit \n");
           
         }
         
         tryAgain:
         setmousequeuestatus(WM_LBUTTONDOWN);
          getmouseclick(WM_LBUTTONDOWN,x,y);
         if(x>200&&x<800&&y>350&&y<450)
         {     closegraph();
               mainx();
         }                         
         else if(x>200&&x<800&&y>500&&y<600)
              closegraph();       
         else
             goto tryAgain;
         
         return 0; 
}      
