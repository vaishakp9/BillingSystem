#ifndef _RESOURCE_FILE
#define _RESOURCE_FILE

#include<iostream.h>

struct object_detail
{
       char name[100];
       int rate;
       int qty;
       int amt;
};


/*     
       0. Burgers
       1. Add-Ons
       2. Beverages
       3. Desserts
*/
    
object_detail item[4][7];

void res()
{
     for(int i=0;i<4;i++)
             for(int j=0;j<7;j++)
                     item[i][j].qty=0;

}

#endif
