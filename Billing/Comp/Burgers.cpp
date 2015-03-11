#include<iostream.h>
#include<graphics.h>
int maina()
{
     initwindow(1000,650);
     int x(0),y(0);
     while (!ismouseclick(WM_LBUTTONDOWN))
        {
            setfillstyle(SOLID_FILL, RED);
            rectangle(0,0,1000,650);
            floodfill(0,0,RED);
            readimagefile("logo.bmp",0,0,100,100);
            readimagefile("burger.bmp",450,200,950,500);
           // setbkcolor(WHITE);
            settextstyle(9,HORIZ_DIR,6);
            //setcolor(BLACK);
            outtextxy(350,10,"BURGERS");
            settextstyle(9,HORIZ_DIR,3);
            outtextxy(330,70,"(Click on the name to order)");
            settextstyle(9,HORIZ_DIR,2);
            outtextxy(250,160,"PRICE (in Rs.)");
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(10,200,250,250);
            rectangle(300,200,370,250);
            floodfill(11,220,WHITE);     
            floodfill(301,201,WHITE);
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(10,260,250,310);
            floodfill(11,270,WHITE);  
            rectangle(300,260,370,310);
            floodfill(301,261,WHITE);  
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(10,320,250,370);
            floodfill(11,351,WHITE);   
            rectangle(300,320,370,370);
            floodfill(301,321,WHITE); 
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(10,380,250,430);
            floodfill(11,390,WHITE);    
            rectangle(300,380,370,430);
            floodfill(301,381,WHITE);
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(10,440,250,490);
            floodfill(11,460,WHITE);  
            rectangle(300,440,370,490);
            floodfill(301,441,WHITE);  
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(10,500,250,550);
            floodfill(11,530,WHITE);    
            rectangle(300,500,370,550);
            floodfill(301,501,WHITE);
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(9,560,254,610);
            floodfill(11,570,WHITE);  
            rectangle(300,560,370,610);
            floodfill(301,561,WHITE);  
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(700,560,950,610);
            floodfill(710,580,WHITE);
            setbkcolor(WHITE);
            setcolor(BLACK);
            settextstyle(9,HORIZ_DIR,3);
            outtextxy(20,215,"McSpicy Paneer");
            outtextxy(320,215,"50");
            outtextxy(60,275,"McVeggie");
            outtextxy(320,275,"50");
            outtextxy(38,335,"McAloo Tikki");
            outtextxy(320,335,"25");
            settextstyle(9,HORIZ_DIR,2.995);
            outtextxy(25,395,"McSpicy Chicken");
            outtextxy(320,395,"65");
            settextstyle(9,HORIZ_DIR,3);
            outtextxy(45,455,"McChicken");
            outtextxy(320,455,"55");
            outtextxy(17,515,"Chicken McGrill");
            outtextxy(320,515,"30");
            settextstyle(9,HORIZ_DIR,1);
            outtextxy(11,575,"Chicken Maharaja-Mac");  
            outtextxy(320,575,"80");
            settextstyle(9,HORIZ_DIR,1);
            outtextxy(720,575,"Return to main menu");
        }   
        tryAgain:
         setmousequeuestatus(WM_LBUTTONDOWN);
         getmouseclick(WM_LBUTTONDOWN,x,y);
         if(x>=10&&x<=250)
         {
                           if(y>=200&&y<=250)
                           closegraph();
                           else if(y>=260&&y<=310)
                           closegraph();
                           else if(y>=320&&y<=370)
                           closegraph();
                           else if(y>=380&&y<=430)
                           closegraph();
                           else if(y>=440&&y<=490)
                           closegraph();
                           else if(y>=500&&y<=550)
                           closegraph();
                           else if(y>=560&&y<=610)
                           closegraph();
                           else
                           goto tryAgain;
         }
         else
             goto  tryAgain;                 
        return 0;
}        
