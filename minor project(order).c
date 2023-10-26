/* Description- Minor project of food order list
    Written by-Y.N.K.Annapurna
    submitting to-Unschool*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct list{
    char name[50];
    int list_number;
    int price;
    int nof;
}p[10000];
void order();
void serve();
void display();
int list_count=0,waiting=0,served_count=0;
 void order()
 {
    int n,ic,size,m;

    printf("Enter your name:");
     scanf("%s",&p[list_count].name);
     p[list_count].list_number = 1+list_count;
    items();
    p[list_count].nof = n;
    p[list_count].price = 0;
    p[list_count].nof = 0;

     level:
    printf("\nHow many items you want to order?");
    scanf("%d",&n);
    while(n--)
    {
    printf("\nEnter the item code:");
    scanf("%d",&ic);
    switch(ic)
    {
case 1:
       {
           printf("\nPrice is: 100");
           printf("\nPlease enter the quantity:");
           scanf("%d",&m);
      p[list_count].nof +=m;
      p[list_count].price +=100*m;
       break;
       }
case 2:{
        printf("\nEnter the size of the item:");
        scanf("%d",&size);
        printf("\nPlease enter the quantity:");
        scanf("%d",&m);
         p[list_count].nof +=m;
        if(size==8)p[list_count].price +=150*m;
        else  if(size==12)p[list_count].price +=180*m;
        else if(size==16)p[list_count].price +=200*m;
        break;
         }
case 3:{
              printf("Enter the size of the item:");
        scanf("%d",&size);
        printf("\nPlease enter the quantity:");
        scanf("%d",&m);
         p[list_count].nof +=m;
        if(size==8) p[list_count].price +=200*m;
        else  if(size==12) p[list_count].price +=225*m;
        else if(size==16) p[list_count].price +=250*m;
        break;
        }
case 4:{
        printf("Enter the size of the item:");
        scanf("%d",&size);
        printf("\nPlease enter the quantity:");
        scanf("%d",&m);
         p[list_count].nof +=m;
        if(size==8) p[list_count].price +=260*m;
        else  if(size==12) p[list_count].price +=285*m;
        else if(size==16) p[list_count].price +=300*m;
        break;
        }
case 5:{
         printf("Enter the size of the item:");
        scanf("%d",&size);
        printf("\nPlease enter the quantity:");
        scanf("%d",&m);
         p[list_count].nof +=m;
        if(size==12) p[list_count].price +=200*m;
        else  if(size==16) p[list_count].price +=225*m;
        else if(size==24) p[list_count].price +=500*m;
        break;
        }
case 6:{
        printf("Enter the size of the item:");
        scanf("%d",&size);
        printf("\nPlease enter the quantity:");
        scanf("%d",&m);
         p[list_count].nof +=m;
        if(size==25) p[list_count].price +=164*m;
        else  if(size==40) p[list_count].price +=205*m;
        break;
        }
case 7:{
        printf("Enter the size of the item:");
        scanf("%d",&size);
        printf("\nPlease enter the quantity:");
        scanf("%d",&m);
         p[list_count].nof +=m;
        if(size==8) p[list_count].price +=230*m;
        else if(size==12) p[list_count].price +=260*m;
        else if(size==16) p[list_count].price +=285*m;
        break;
        }
case 8:{
        printf("\nPrice is: 40");
        printf("\nPlease enter the quantity:");
        scanf("%d",&m);
         p[list_count].nof +=m;
          p[list_count].price +=40*m;
        break;
        }
case 9:{
        printf("\nPrice is: 50");
        printf("\nPlease enter the quantity:");
        scanf("%d",&m);
         p[list_count].nof +=m;
          p[list_count].price +=50*m;
        break;
        }
case 10:{
        printf("\nPrice is: 30");
        printf("\nPlease enter the quantity:");
        scanf("%d",&m);
         p[list_count].nof +=m;
          p[list_count].price +=30*m;
        break;
        }
        default :
        {
            printf("\nEnter the right choice");
        }

      }
    }

     char temp;
    printf ("Do you want to order anything else?(y/n)\n ");
    scanf("%s", &temp);
    if (temp == 'y' || temp == 'Y')
        goto level;
    printf ("\nNumber of food ordered %d\n", p[list_count].nof);
    printf("\nThank you %s for your order.Your bill is %d ",p[list_count].name, p[list_count].price);
    printf("\nPlease wait while we prepare your order");
   list_count++;
}
void serve()
{
    if (list_count==0)
    {
        printf ("Please order first\n");
        return;
    }

    else if (served_count == list_count) {
        printf ("All order served\n");
        return;
    }

    printf ("Order no. %d by %s is ready\n", p[served_count].list_number, p[served_count].name);
    printf ("Please do enjoy your meal\n\n");
    served_count++;
}
void display()
{
    printf ("Total order taken: %d\n", (list_count));
    printf ("Total number of order served %d\n", served_count);
    printf ("Number of Currently waiting to be served: %d\n", (list_count-served_count));
    printf ("Currently preparing food for order no. %d\n\n", p[served_count].list_number);
}
void items()
 {

    printf("\n------------------------------------------MENU-----------------------------------------------");
    printf("\nITEM CODE\t\t\tDESCRIPTION\t\t\tSIZE\t\t\tPRICE\n");
    printf("[1]\t\t\tEspresso\t\t\t7g/25ml\t\t\t\t100\n");
    printf("[2]\t\t\tCaffè Americano\t\t\t8/12/16\t\t\t\t150/180/200\n");
    printf("[3]\t\t\tCappucino\t\t\t8/12/16\t\t\t\t200/225/250\n");
    printf("[4]\t\t\tCoco Cappucino\t\t\t8/12/16\t\t\t\t260/285/300\n");
    printf("[5]\t\t\tCaffè Latte\t\t\t12/16/24\t\t\t200/225/250\n");
    printf("[6]\t\t\tChocholate Milkshake\t\t25cl/40cl\t\t\t164/205\n");
    printf("[7]\t\t\tCaffè Mocha\t\t\t8/12/16\t\t\t\t230/260/285\n");
    printf("[8]\t\t\tVanilla pastry\t\t\t70gm\t\t\t\t40\n");
    printf("[9]\t\t\tChocholate pastry\t\t\70gm\t\t\t\t50\n");
    printf("[10]\t\t\tStrawberry pastry\t\t70gm\t\t\t\t30\n");
}
void main()
{
    int ch;
    printf("\t\t WELCOME TO CAFE MELODY");
    while(1){
    printf("\n=====================================");
    printf("\n1.ORDER\n2.SERVE\n3.DISPLAY\n4.EXIT\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
                order();
                break;
        case 2:
               serve();
                break;
        case 3:
               display();
                break;
        case 4:
            printf("THANK YOU");
                   exit(0);
    default:
        {
            printf("\nPlease enter the right choice!!");
        }
    }
  }
}



