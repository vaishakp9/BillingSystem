 #ifndef _FILE_BILL
#define _FILE_BILL

#include<iostream.h>
#include<stdlib.h>
#include<graphics.h>
#include"add_ons.cpp"
#include"Beverages.cpp"
#include"Burgers.cpp"
#include"desserts.cpp"

int mainbill()
{
    strcpy(item[0][0].name,"McSpicy Paneer");
    item[0][0].rate=50;
    
    strcpy(item[0][1].name,"McVeggie");
    item[0][1].rate=50;
    
    strcpy(item[0][2].name,"McAloo Tikki");
    item[0][2].rate=25;
    
    strcpy(item[0][3].name,"McSpicy Chicken");
    item[0][3].rate=65;
    
    strcpy(item[0][4].name,"McChicken");
    item[0][4].rate=55;
    
    strcpy(item[0][5].name,"Chicken McGrill");
    item[0][5].rate=30;
    
    strcpy(item[0][6].name,"Chicken Maharaja-Mac");
    item[0][6].rate=80;
    
    strcpy(item[1][0].name,"BigSpicy Paneer Wrap");
    item[1][0].rate=40;
    
    strcpy(item[1][1].name,"Veg Pizza McPuff");
    item[1][1].rate=30;
    
    strcpy(item[1][2].name,"French Fries");
    item[1][2].rate=25;
    
    strcpy(item[1][3].name,"BigSpicy Chicken Wrap");
    item[1][3].rate=50;
    
    strcpy(item[1][4].name,"Chicken McNuggets");
    item[1][4].rate=70;
    
    strcpy(item[2][0].name,"Cafe Mocha");
    item[2][0].rate=40;
    
    strcpy(item[2][1].name,"Cold Coffee");
    item[2][1].rate=50;
    
    strcpy(item[2][2].name,"Hot Chocolate");
    item[2][2].rate=40;
    
    strcpy(item[2][3].name,"Cappuccino");
    item[2][3].rate=35;
    
    strcpy(item[2][4].name,"Soft Drinks");
    item[2][4].rate=25;
    
    strcpy(item[2][5].name,"Plain Tea");
    item[2][5].rate=20;
    
    strcpy(item[2][6].name,"Iced tea");
    item[2][6].rate=35;
    
    strcpy(item[3][0].name,"McSwirl");
    item[3][0].rate=30;
    
    strcpy(item[3][1].name,"McFlurry");
    item[3][1].rate=60;
    
    strcpy(item[3][2].name,"Soft serve");
    item[3][2].rate=20;
    
    strcpy(item[3][3].name,"McShake");
    item[3][3].rate=35;
    
    for (int i=0;i<4;i++)
        for (int j=0;j<7;j++)
            item[i][j].amt=item[i][j].rate*item[i][j].qty;       
        
    initwindow(1000,800);
    while (!kbhit())
    {
            setfillstyle(SOLID_FILL, RED);
            rectangle(0,0,1000,800);
            floodfill(0,0,RED);
            readimagefile("logo.bmp",0,0,80,80);
            settextstyle(9,HORIZ_DIR,6);
            setbkcolor(RED);
            setcolor(WHITE);
            outtextxy(400,10,"BILL");
            settextstyle(9,HORIZ_DIR,3);
            outtextxy(20,100,"Particulars");
            outtextxy(635,100,"Qty");
            outtextxy(735,100,"Rate");
            outtextxy(850,100,"Amount");
            settextstyle(9,HORIZ_DIR,1);
            int n=1;
            char nc[5];
            int tot=0;
            char rate[4][7][3],qty[4][7][5],amt[4][7][10],total[15];
            for (int i=0;i<=4;i++)
                for (int j=0;j<7;j++)
                    if (item[i][j].qty>0) 
                       if (item[i][j].qty!=32768)
                          if (item[i][j].rate!=83,88,608)
                             if (item[i][j].amt!=84,21,376)
                                {
                                           itoa(item[i][j].rate,rate[i][j],10);
                                           itoa(item[i][j].qty,qty[i][j],10);
                                           itoa(item[i][j].amt,amt[i][j],10);
                                           n++;
                                           itoa(n,nc,100);
                                           outtextxy(20,((n*25)+100),item[i][j].name);
                                           outtextxy(650,((n*25)+100),qty[i][j]);                               
                                           outtextxy(750,((n*25)+100),rate[i][j]);
                                           outtextxy(880,((n*25)+100),amt[i][j]);
                                           tot+=item[i][j].amt;
                                }
            itoa(tot,total,10);
            settextstyle(9,HORIZ_DIR,3);
            outtextxy(20,(n+2)*25+100,"Total(inclusive of all taxes)");
            outtextxy(875,(n+2)*25+100,total);
            outtextxy(20,(n+5)*25+100,"Thank You. Please visit again");
    }
    closegraph();
    return 0;   
}

#endif
