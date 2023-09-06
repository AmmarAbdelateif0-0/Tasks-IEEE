#include<stdio.h>
#include<stdlib.h>
int main()
{
    

int check=1;
float totalprice=0.0;
int num_order=0;
int numitems=0;
float prices_items[9]={12.0,10.0,7.0,11.0,2.0,2.0,3.0,3.0,2.0};
float cost_delivering=0.0;

// GET  CLIENT_NAME
char name[20];
// char *ptr=&name[0];
printf("ENTER YOUR NAME SIR : ");
gets(name);
printf("\n");


// PRINTF BOARD FOR RESTAURANT
printf("*************************************************************************************\n");
printf("********************    WELCOME TO RESTAURANT ( KARAM EL-SHAM )  ********************\n");
printf("*************************************************************************************\n\n\n");

// MESA MESA FOR CLIENT

printf("HELLO Mr : ");
puts(name);
printf("\n");


// FOOD MENU

printf("*********************************************************\n");
printf("*          Food Menu available in KARAM EL-SHAM         *\n");
printf("*********************************************************\n");

printf("* ITEMS                            ***       Price      *\n\n");
printf("*                                  ***                  *\n\n");

printf("* 1-Beef Shawarma                  ***       12.00$     *\n");
printf("* 2-Chicken Shawarma               ***       10.00$     *\n");
printf("* 3-Potato  Sandwich               ***       7.00 $     *\n");
printf("* 4-Mozzarella Potato  Sandwich    ***       11.00$     *\n");
printf("* 5-Falafel Sandwich               ***       2.00 $     *\n");
printf("* 6-Fol Sandwich                   ***       2.00 $     *\n\n");

// EXTRAS FOOD 

printf("**********************************************************\n");
printf("*                      FOR Extras                        *\n");
printf("**********************************************************\n");

printf("* 7-French fries                   ***       3.00 $      *\n");
printf("* 8-Tommy                          ***       3.00 $      *\n");
printf("* 9-pickle                         ***       2.00 $      *\n");
printf("**********************************************************\n");




// ASK CLIENT FOR ORDER INFORMATION
printf("**********************************************************\n");
printf("*                     TIME FOR ORDER                     *\n");
printf("**********************************************************\n\n");

while (check)
{
    int number_items_order =0;
    
    printf("ENTER THE FOOD NUMBER YOU WANT  : ");
    scanf("%d", &numitems);
// CHECK FOR COST DELIVERY
    if(prices_items[numitems]<10)
        {
            cost_delivering+=2;
        }
    else
        {
            cost_delivering+=3;
        }

    printf("\nENTER HOW MANY ITEMS YOU WANT   : ");
    scanf("%d",&number_items_order);
    
    num_order+=number_items_order;
    totalprice+=(prices_items[numitems-1]*number_items_order);
    
    printf("\nFOR CONTINUE YOUR ORDER ENTER 1 FOR END ENTER 0 : ");
    scanf("%d",&check);
    printf("\n");


}
// check for discount
if (num_order>5)
{
    totalprice-=(totalprice*.2);
}

//The check, please

printf("**********************************************************\n");
printf("*              THE TOTAL COST OF THE ORDER               *\n");
printf("**********************************************************\n");
printf("*          TOTAL PRICE                 : %.2f $            *\n",(totalprice+cost_delivering));
printf("*          TOTAL PRICE BEFORE DISCOUNT : %.2f $            *\n",(totalprice+totalprice*.2));
printf("*          COST FOR FOOD               : %.2f $            *\n",totalprice);
printf("*          COST OF DELIVERY            : %.2f $            *\n",cost_delivering);
printf("**********************************************************\n\n\n");



printf("************************************************************\n");
printf("*     WE HOPE YOU HAD A WONDERFUL & EASY EXPERIENCE        *\n");
printf("*     Karam Al-Sham RESTAURANT IS ALWAYS AT YOUR SERVICE   *\n");
printf("************************************************************\n\n");




}
