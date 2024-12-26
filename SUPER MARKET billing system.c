#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<time.h>
float  totalbll=0;
float discount=0;
float finalbill;
void vegetbles();
void sncks();
void pulse();
void otheritem();
int c1=0;
int c2=0;
int c3=0;
int c4=0;
int c5=0;
int c6=0;
int c7=0;
int c8=0;
int c9=0;
int c10=0;
int c11=0;
int c12=0;
int c13=0;
int c14=0;
int c15=0;
int c16=0;
char s1[1000];
char s2[1000];
char s3[1000];
char s4[1000];
char s5[1000];
char s6[1000];
char s7[1000];
char s8[1000];
char s9[1000];
char s10[1000];
char s11[1000];
char s12[1000];
char s13[1000];
char s14[1000];
char s15[1000];
char s16[1000];

void main()
{
    int c;
    do
    {
    	printf("\n Welcome to grocery billing system");
    	printf("\n------------------------------------------------------------------------\n");
        printf("\n-----------------------GUNDA NAGESHWAR RAO---------------------------------------\n");
        printf("\n-------------------------------------------------------------------------\n");
        printf("\nTHE GROCERRY ITEMS IN SHOP ARE:\n");
        printf("\n-------------------------------------------------------------------------\n");
        printf("\n1.VEGETABLES\n");
        printf("\n2.SNACKS\n");
        printf("\n3.PULSES\n");
        printf("\n4.OTHER ITEMS\n");
        int x,y;
        printf("\nSelect what you want to buy:\n");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            vegetbles();
            break;
        case 2:
         sncks();
            break;
        case 3:
            pulse();
            break;
        case 4:
        	otheritem();
        	break;
        default :
            printf("\nInvalid choice of grocerry items\n");
        }
        printf("\nDo u want to order some more grocerry items:\n");
        printf("1.Yes\n2.No\n");
        scanf("%d",&c);
    } while(c==1);
    if(c!=1)
    printf("----------------------------------------------------------------------\n");
    printf("\n----------------------------------------------------------------------\n");
     time_t t;
    time(&t);
    printf("\nTHE BILL IS TAKEN AT (DATE AND TIME):%s\n",ctime(&t));
    printf("\nCASHIER:sriharsha\n");
    printf("\n-----------------------------------------------------------------------\n");
    printf("\n------------------------------------------------------------------------\n");
    printf("\n*****\n");
    printf("\nTHE GROCERRY ITEMS YOU ORDERED ARE:\n");
    printf("\n*****\n");
    if(c1==1)
    {
    printf("\n%s\n",s1);
    }
    if(c2==1)
    {
    printf("\n%s\n",s2);
    }
    if(c3==1)
    {
    printf("\n%s\n",s3);
    }
    if(c4==1)
    {
    printf("\n%s\n",s4);
    }
    if(c5==1)
    {
    printf("\n%s\n",s5);
    }
    if(c6==1)
    {
    printf("\n%s\n",s6);
    }
    if(c7==1)
    {
    printf("\n%s\n",s7);
    }
    if(c8==1)
    {
    printf("\n%s\n",s8);
    }
    if(c9==1)
    {
    printf("\n%s\n",s9);
    }
    if(c10==1)
    {
    printf("\n%s\n",s10);
    }
    if(c11==1)
    {
    printf("\n%s\n",s11);
    }
    if(c12==1)
    {
    printf("\n%s\n",s12);
    }
     if(c13==1)
    {
    printf("\n%s\n",s13);
    }
     if(c14==1)
    {
    printf("\n%s\n",s14);
    }
     if(c15==1)
    {
    printf("\n%s\n",s15);
    }
     if(c16==1)
    {
    printf("\n%s\n",s16);
    }
    printf("\n****\n");
    printf("\n****\n");
    printf("TOTAL BILL OF GROCERRY ITEMS IS: %f\n", totalbll);
    printf("\n10 percent discount on total bill\n");
    discount=totalbll*10/100;
    printf("\nTHE DISCOUNT OF GROCERRY ITEMS IS:%f\n",discount);
    finalbill=totalbll-discount;
    printf("\nTHE FINAL TOTAL BILL OF GROCERRY ITEMS IS :%f\n",finalbill);
    printf("\ncustomer info:\n");
    printf("\nNAME:***\n");
    printf("\nPHONE NO:**\n");
    printf("\n****\n");
    printf("\n*THANK YOU VISIT AGAIN**\n");

}
void vegetbles()
{
	printf("\nTHE AVAILABLE VEGETABLES ARE:\n");
    printf("\n1.ONIONS:\n");
    printf("\n2.POTATO\n");
    printf("\n3.TOMATO\n");
    printf("\n4.CABBAGE\n");
    printf("\nthe cost of 1kg ONIONS IS:125rs\n");
    printf("\nthe cost of 1kg POTATO IS:125\n");
    printf("\nthe cost of 1kg TOMATO IS:125rs\n");
    printf("\nthe cost of 1kg CABBAGE IS:130rs\n");
    int y;
    int n;
    printf("\nEnter the vegetable item you want to order:\n\n");
    scanf("%d",&y);
    switch(y)
    {
    case 1:
        printf("\nHow many kgs of  ONIONS you wannt:\n");
        scanf("%d",&n);
       printf("\nThe cost of total ONIONS is: %d\n",n*125);
        totalbll+=n*125;
        sprintf(s1,"The cost of ONIONS :%d",n*125);
        c1++;
        break;
    case 2:
        printf("\nHow many kgs POTATOS you wannt:\n");
        scanf("%d",&n);
        printf("\nThe cost of total POTATOS is :%d\n",n*125);
        totalbll+=n*125;
        sprintf(s2,"The cost of POTATOS is: %d",n*125);
        c2++;
        break;
    case 3:
        printf("\nHow many kgs of TOMATOS you wannt:\n");
        scanf("%d",&n);
        printf("\nThe cost of TOMATOS is: %d\n",n*125);
        totalbll+=n*125;
        sprintf(s3,"The cost of TOMATOS:%d",n*125);
        c3++;
        break;
    case 4:
        printf("\nHow many kgs of CABBAGES you wannt:\n");
        scanf("%d",&n);
       printf("\nThe cost of total CABBAGES is: %d\n",n*130);
        totalbll+=n*130;
        sprintf(s4,"The cost of CABBAGES is:%d",n*130);
        c4++;
        break;
    }
}
void sncks()
{
    printf("\nThe available SNACKS are:\n");
    printf("\n1.LAYS\n");
    printf("\n2.BINGO\n");
    printf("\n3.MOON DAL\n");
    printf("\n4.MAD ANGELS\n");
    printf("\nthe cost of 1 LAYS IS:10rs\n");
    printf("\nthe cost of 1 BINGO IS:10\n");
    printf("\nthe cost of 1 MOON DAL IS:10rs\n");
    printf("\nthe cost of 1 MAD ANGELS IS:10rs\n");
    int y;
    int n;
    printf("\nEnter your favourite SNACKS:\n");
    scanf("%d",&y);
    switch(y)
    {
    case 1:
        printf("\nHow many LAYS you want:\n");
        scanf("%d",&n);
        printf("\nThe cost of  LAYS  is: %d\n",n*10);
        totalbll+=n*10;
        sprintf(s5,"The cost of LAYS:%d",n*10);
        c5++;
        break;
    case 2:
        printf("\nHow many BINGOS you wannt:\n");
        scanf("%d",&n);
        printf("\nThe cost of BINGOS is:%d\n",n*10);
        totalbll+=n*10;
        sprintf(s6,"The cost of BINGOS is:%d",n*10);
        c6++;
        break;
    case 3:
        printf("\nHow many MOON DAL you wannt\n");
        scanf("%d",&n);
        printf("\nThe cost of MOON DAL is: %d\n",n*10);
        totalbll+=n*10;
        sprintf(s7,"The cost of MOON DAL is:%d",n*10);
        c7++;
        break;
    case 4:
        printf("\nHow many MAD ANGELS you want:\n");
        scanf("%d",&n);
        printf("\nThe cost of MAD ANGELS is: %d\n",n*10);
        totalbll+=n*10;
        sprintf(s8,"The cost of MAD ANGELS is :%d",n*10);
        c8++;
        break;
    }
}
void pulse()
{
    printf("\nThe available PULSES are:\n");
    printf("\n1.RED GRAM\n");
    printf("\n2.GREEN GRAM\n");
    printf("\n3.BLACK GRAM\n");
    printf("\n4.KIDNEY BEANS\n");
    printf("\nthe cost of 1kg RED GRAM IS:135rs\n");
    printf("\nthe cost of 1kg GREEN GRAM IS:135\n");
    printf("\nthe cost of 1kg BLACK GRAM IS:135rs\n");
    printf("\nthe cost of 1kg KIDNEY BEANS IS:135rs\n");
    int y;
    int n;
    printf("\nEnter your favourite PULSES:\n");
    scanf("%d",&y);
    switch(y)
    {
    case 1:
        printf("\nHow many kgs of RED GRAM you want:\n");
        scanf("%d",&n);
        printf("\nThe cost of RED GRAM is:%d\n",n*135);
        totalbll+=n*135;
        sprintf(s9,"The cost of RED GRAM is:%d",n*135);
        c9++;
        break;
    case 2:
        printf("\nHow many kgs of GREEN GRAM  you wannt:\n");
        scanf("%d",&n);
        printf("\nThe cost of total GREEN GRAM is:%d\n",n*135);
        totalbll+=n*135;
        sprintf(s10,"The cost of GREEN GRAM :%d",n*135);
        c10++;
        break;
    case 3:
        printf("\nHow many kgs of BLACK GRAM you wannt:\n");
        scanf("%d",&n);
        printf("\nThe cost of total BLACK GRAM is:%d\n",n*135);
        totalbll+=n*135;
        sprintf(s11,"The cost of BLACK GRAM is:%d",n*135);
        c11++;
        break;
    case 4:
        printf("\nHow many kgs of KIDNEY BEANS you wannt:\n");
        scanf("%d",&n);
        printf("\nThe cost of total KIDNEY BEANS  is:%d\n",n*135);
        totalbll+=n*135;
        sprintf(s12,"The cost of KIDNEY BEANS :%d",n*135);
        c12++;
        break;
    }
}
void otheritem()
{
    printf("\nThe available OTHER ITEMS are:\n");
    printf("\n1.RICEn");
    printf("\n2.EGGS\n");
    printf("\n3.DATES&ALMONDS\n");
    printf("\n4.SUGAR\n");
    printf("\nthe cost of 1kg RICE IS:85rs\n");
    printf("\nthe cost of 1 EGGS IS:5rs\n");
    printf("\nthe cost of 1 DATES&ALMOND IS:89rs\n");
    printf("\nthe cost of 1kg SUGAR IS:89rs\n");
    int y;
    int n;
    printf("\nEnter what item you want:\n");
    scanf("%d",&y);
    switch(y)
    {
    case 1:
        printf("\nHow many kgs of RICE you want:\n");
        scanf("%d",&n);
        printf("\nThe cost of RICE is:%d\n",n*85);
        totalbll+=n*85;
        sprintf(s13,"The cost of RICE:%d",n*85);
        c13++;
        break;
    case 2:
        printf("\nHow many EGGS you wannt:\n");
        scanf("%d",&n);
        printf("\nThe cost of total EGGS is:%d\n",n*85);
        totalbll+=n*85;
        sprintf(s14,"The cost of EGGS is:%d",n*85);
        c14++;
        break;
    case 3:
        printf("\nHow many DATES AND ALMONDS you wannt:\n");
        scanf("%d",&n);
        printf("\nThe cost of total DATES AND ALMONDS is:%d\n",n*89);
        totalbll+=n*89;
        sprintf(s15,"The cost of DATES AND ALMONDS :%d",n*89);
        c15++;
        break;
    case 4:
        printf("\nHow many kgs of SUGAR  you wannt:\n");
        scanf("%d",&n);
        printf("\nThe cost of SUGAR is:%d\n",n*89);
        totalbll+=n*89;
        sprintf(s16,"The cost of SUGAR is:%d",n*89);
        c16++;
        break;
    }
    
}
