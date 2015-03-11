#ifndef _FILE_DESSERTS
#define _FILE_DESSERTS

#include<iostream.h>
#include<graphics.h>
#include "resource_file.cpp"
#include "input_function.cpp"
#include "main_menu.cpp"

int maind()
{
     back:
     initwindow(1000,750);
     int x(0),y(0);
     while (!ismouseclick(WM_LBUTTONDOWN))
        {
            setfillstyle(SOLID_FILL, RED);
            rectangle(0,0,1000,1000);
            floodfill(0,0,RED);
            
            readimagefile("logo.bmp",0,0,100,100);
             readimagefile("mcflurry.bmp",700,200,825,325);
            readimagefile("mcshake.bmp",850,275,975,400);
            readimagefile("mcswirl.bmp",850,425,975,550);
            readimagefile("soft_serve.bmp",700,350,825,475);
            
            settextstyle(9,HORIZ_DIR,6);
            outtextxy(400,10,"Desserts");
            
            settextstyle(9,HORIZ_DIR,4);
            outtextxy(275,70,"(Click on the name to order)");
            
            settextstyle(9,HORIZ_DIR,3);
            outtextxy(445,150,"PRICE (in Rs.)");
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(10,200,400,275);
            rectangle(500,200,575,275);
            floodfill(11,201,WHITE);     
            floodfill(501,201,WHITE);
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(10,300,400,375);
            floodfill(11,301,WHITE);  
            rectangle(500,300,575,375);
            floodfill(501,301,WHITE);  
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(10,400,400,475);
            floodfill(11,401,WHITE);   
            rectangle(500,400,575,475);
            floodfill(501,401,WHITE); 
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(10,500,400,575);
            floodfill(11,501,WHITE);    
            rectangle(500,500,575,575);
            floodfill(501,501,WHITE);
            
            setfillstyle(SOLID_FILL, WHITE);
            rectangle(675,675,950,725);
            floodfill(676,676,WHITE);
            
            setbkcolor(WHITE);
            setcolor(BLACK);
            settextstyle(9,HORIZ_DIR,3);
            outtextxy(145,225,"McSwirl");
            outtextxy(520,225,"30");
            outtextxy(140,325,"McFlurry");
            outtextxy(520,325,"60");
            outtextxy(135,425,"Soft Serve");
            outtextxy(520,425,"20");
            settextstyle(9,HORIZ_DIR,3);
            outtextxy(145,525,"McShake");
            outtextxy(520,525,"35");
            settextstyle(9,HORIZ_DIR,3);
            settextstyle(9,HORIZ_DIR,2);
            outtextxy(685,690,"Return to main menu");
        }
        
        tryagain:
        getmouseclick(WM_LBUTTONDOWN,x,y);
        
        if (x>10 && x<400 && y>200 && y<275)
        {        initwindow(500,200);
                 moveto(5,50);
                 settextstyle(9,HORIZ_DIR,1);
                 outtext("Enter the Quantity (Press Enter to continue) : ");
                 inputFromScreen(item[3][0].qty);
                 outtext("Press Enter to continue");
                 closegraph();
                 goto back;
        }        
        else if (x>10 && x<400 && y>300 && y<375)
        {        initwindow(500,200);
                 moveto(5,50);
                 settextstyle(9,HORIZ_DIR,1);
                 outtext("Enter the Quantity (Press Enter to continue) : ");
                 inputFromScreen(item[3][1].qty);
                 outtext("Press Enter to continue");
                 closegraph();
                 goto back;
        }       
        else if (x>10 && x<400 && y>400 && y<475)
        {        initwindow(500,200);
                 moveto(5,50);
                 settextstyle(9,HORIZ_DIR,1);
                 outtext("Enter the Quantity (Press Enter to continue) : ");
                 inputFromScreen(item[3][2].qty);
                 outtext("Press Enter to continue");
                 closegraph();
                 goto back;
        }        
        else if (x>10 && x<400 && y>500 && y<575)  
        {        initwindow(500,200);
                 moveto(5,50);
                 settextstyle(9,HORIZ_DIR,1);
                 outtext("Enter the Quantity (Press Enter to continue) : ");
                 inputFromScreen(item[3][3].qty);
                 outtext("Press Enter to continue");
                 closegraph();
                 goto back;
        }        
        else if (x>675 && x<950 && y>675 && y<725)
        {     closegraph();
               mainx();
        }  
        else
            goto tryagain;
        
        return 0;
}

#endif
