#ifndef _FILE_MAINMENU
#define _FILE_MAINMENU

#include<iostream.h>
#include<graphics.h>
#include"add_ons.cpp"
#include"Beverages.cpp"
#include"Burgers.cpp"
#include"desserts.cpp"
#include"bill.cpp"

int mainx()
{
     initwindow(1000,750);
     int x(0),y(0);
     while (!ismouseclick(WM_LBUTTONDOWN))
        {
            setfillstyle(SOLID_FILL, RED);
            rectangle(0,0,1000,750);
            floodfill(0,0,RED);
             readimagefile("logo.bmp",400,25,600,200);
           // setbkcolor(WHITE);
            settextstyle(1,HORIZ_DIR,7);
            outtextxy(250,225,"Main Menu");
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(300,350,700,400);
            floodfill(301,351,WHITE);
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(300,425,700,475);
            floodfill(301,426,WHITE);  
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(300,500,700,550);
            floodfill(301,501,WHITE);  
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(300,575,700,625);
            floodfill(301,576,WHITE);   
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(100,650,400,700);
            floodfill(101,651,WHITE); 
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(600,650,900,700);
            floodfill(601,651,WHITE);    
            
            setbkcolor(WHITE);
            setcolor(BLACK);
            settextstyle(9,HORIZ_DIR,3);
            outtextxy(450,360,"Burgers");
            outtextxy(440,435,"Add-Ons");
            outtextxy(435,510,"Beverages");
            outtextxy(450,585,"Desserts");
            outtextxy(220,660,"Exit");
            outtextxy(675,660,"Get the bill");
        }   
       

        tryagain:
        getmouseclick(WM_LBUTTONDOWN,x,y);
        
        if (x>300 && x<700 && y>350 && y<400)
        {     closegraph();
               maina();
         }  
        else if (x>300 && x<700 && y>425 && y<475) 
       {     closegraph();
               mainb();
         }  
        else if (x>300 && x<700 && y>500 && y<550)
        {     closegraph();
               mainc();
         }  
        else if (x>300 && x<700 && y>575 && y<625)  
        {     closegraph();
               maind();
         }  
        else if (x>100 && x<400 && y>650 && y<700)
                closegraph();
        else if (x>600 && x<900 && y>650 && y<700)
        {     closegraph();
              mainbill();
        }
        else
            goto tryagain;
            
        return 0;
}

#endif
