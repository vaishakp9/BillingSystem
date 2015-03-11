#ifndef _FILE_BEVERAGES
#define _FILE_BEVERAGES

#include<iostream.h>
#include<graphics.h>
#include "resource_file.cpp"
#include "input_function.cpp"
#include "main_menu.cpp"

int mainc()
{
     back:
     initwindow(1000,650);
     int x(0),y(0);
     while (!ismouseclick(WM_LBUTTONDOWN))
        {
            setfillstyle(SOLID_FILL, RED);
            rectangle(0,0,1000,650);
            floodfill(0,0,RED);
            
            readimagefile("logo.bmp",0,0,100,100);
            readimagefile("bev.bmp",700,200,950,450);
            
            settextstyle(9,HORIZ_DIR,6);
            outtextxy(350,10,"BEVERAGES");
            
            settextstyle(9,HORIZ_DIR,3);
            outtextxy(380,70,"(Click on the name to order)");
            
            settextstyle(9,HORIZ_DIR,2);
            outtextxy(250,160,"PRICE (in Rs.)");
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(10,200,250,250);
            floodfill(11,220,WHITE);     
            rectangle(300,200,370,250);
            floodfill(301,201,WHITE);
            readimagefile("cafemocha.bmp",460,200,510,250);
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(10,260,250,310);
            floodfill(11,270,WHITE);  
            rectangle(300,260,370,310);
            floodfill(301,261,WHITE);   
            readimagefile("coldcoffee.bmp",460,260,510,310);
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(10,320,250,370);
            floodfill(11,351,WHITE);   
            rectangle(300,320,370,370);
            floodfill(301,321,WHITE); 
            readimagefile("hotchocolate.bmp",460,320,510,370);
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(10,380,250,430);
            floodfill(11,390,WHITE);   
            rectangle(300,380,370,430);
            floodfill(301,381,WHITE); 
            readimagefile("cappuccino.bmp",460,380,510,430);
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(10,440,250,490);
            floodfill(11,460,WHITE);  
            rectangle(300,440,370,490);
            floodfill(301,441,WHITE);    
            readimagefile("softdrinks.bmp",460,440,510,490);
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(10,500,250,550);
            floodfill(11,530,WHITE);   
            rectangle(300,500,370,550);
            floodfill(301,501,WHITE); 
            readimagefile("plaintea.bmp",460,500,510,550);
            
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(10,560,250,610);
            floodfill(11,570,WHITE);  
            rectangle(300,560,370,610);
            floodfill(301,561,WHITE);    
            readimagefile("icedtea.bmp",460,560,510,610);
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(700,560,950,610);
            floodfill(710,580,WHITE);
            
            setbkcolor(WHITE);
            setcolor(BLACK);
            settextstyle(9,HORIZ_DIR,3);
            outtextxy(50,215,"Cafe Mocha");
            outtextxy(320,215,"40");
            outtextxy(50,275,"Cold Coffee");
            outtextxy(320,275,"50");
            outtextxy(38,335,"Hot Chocolate");
            outtextxy(320,335,"40");
            outtextxy(55,395,"Cappuccino");
            outtextxy(320,395,"35");
            outtextxy(60,455,"Soft Drinks");
            outtextxy(320,455,"25");
            outtextxy(65,515,"Plain Tea");
            outtextxy(320,515,"20");
            outtextxy(75,575,"Iced Tea"); 
            outtextxy(320,575,"35"); 
            settextstyle(9,HORIZ_DIR,1);
            outtextxy(720,575,"Return to main menu");
        }   
        
        tryagain:
        getmouseclick(WM_LBUTTONDOWN,x,y);
        
        if (x>10 && x<250 && y>200 && y<250)
        {        initwindow(500,200);
                 moveto(5,50);
                 settextstyle(9,HORIZ_DIR,1);
                 outtext("Enter the Quantity (Press Enter to continue) : ");
                 inputFromScreen(item[2][0].qty);
                 outtext("Press Enter to continue");              
                 closegraph();
                 goto back;
        }        
        else if (x>10 && x<260 && y>260 && y<310)
        {        initwindow(500,200);
                 moveto(5,50);
                 settextstyle(9,HORIZ_DIR,1);
                 outtext("Enter the Quantity (Press Enter to continue) : ");
                 inputFromScreen(item[2][1].qty);
                 outtext("Press Enter to continue");
                 closegraph();
                 goto back;
        }        
        else if (x>10 && x<260 && y>320 && y<370)
        {        initwindow(500,200);
                 moveto(5,50);
                 settextstyle(9,HORIZ_DIR,1);
                 outtext("Enter the Quantity (Press Enter to continue) : ");
                 inputFromScreen(item[2][2].qty);
                 outtext("Press Enter to continue");
                 closegraph();
                 goto back;
        }         
        else if (x>10 && x<250 && y>380 && y<430) 
        {        initwindow(500,200);
                 moveto(5,50);
                 settextstyle(9,HORIZ_DIR,1);
                 outtext("Enter the Quantity (Press Enter to continue) : ");
                 inputFromScreen(item[2][3].qty);
                 outtext("Press Enter to continue");
                 closegraph();
                 goto back;       
        }        
        else if (x>10 && x<250 && y>440 && y<490) 
        {        initwindow(500,200);
                 moveto(5,50);
                 settextstyle(9,HORIZ_DIR,1);
                 outtext("Enter the Quantity (Press Enter to continue) : ");
                 inputFromScreen(item[2][4].qty);
                 outtext("Press Enter to continue");
                 closegraph();
                 goto back;
        }        
        else if (x>10 && x<250 && y>500 && y<550) 
        {        initwindow(500,200);
                 moveto(5,50);
                 settextstyle(9,HORIZ_DIR,1);
                 outtext("Enter the Quantity (Press Enter to continue) : ");
                 inputFromScreen(item[2][5].qty);
                 outtext("Press Enter to continue");
                 closegraph();
                 goto back;        
        }        
        else if (x>10 && x<250 && y>560 && y<610)
        {        initwindow(500,200);
                 moveto(5,50);
                 settextstyle(9,HORIZ_DIR,1);
                 outtext("Enter the Quantity (Press Enter to continue) : ");
                 inputFromScreen(item[2][6].qty);
                 outtext("Press Enter to continue");
                 closegraph();
                 goto back;        
        }        
        else if (x>700 && x<950 && y>560 && y<610)
       {     closegraph();
               mainx();
         }  
        else
            goto tryagain;
        
        return 0;
}        

#endif
