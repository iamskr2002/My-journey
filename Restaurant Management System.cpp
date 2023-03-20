#include<stdio.h>
#include<string.h>
#include<stdlib.h>


double price[7] = {140 , 70 , 140 , 80 , 100 , 160 , 50 };
double mealTaxPrices[7];
int adultNumber,childNumber;


void printMeals();
void orderMeals();
double orderForAdult();
double orderForChildren();
int main()
{
    char response = 'y';
    
     
     printMeals();
     while(response == 'y'|| response == 'Y')
    {
            printf("please enter number of adults  :");
            scanf("%d",&adultNumber);
            
            printf("please enter number of children:");
            scanf("%d",&childNumber);
            system ("cls");
            
                       
            orderMeals();
            
            printf("\nwould you like to continue(y/n):");
            scanf("\n%c",&response);
    }
  
 printf("\n      ******************** THANK YOU FOR COMING  *************************\n");
 printf("\20**********************   PLEASE VISIT US NEXT TIME  **************************\20 \n");
   system("pause");
   return 0;
}

void printMeals()
{
     
      printf("\20*******************  WELCOME TO KARKHANA CAFE **************************\20\n");
      printf(" \t\t\t Below is the menue:\20\n");
      printf(" \t\t\t MEALS\t\t\tPRICE:\n");
      printf(" \t\t\t \22*******************************\22\n");
      printf(" \t\t\t 1- Veg Pakauda   \tRs 140\n");
      printf(" \t\t\t 2- Veg Momo   \t\tRs 70\n");
      printf(" \t\t\t 3- French Fry    \tRs 140\n");
      printf(" \t\t\t 4- Veg Chowmein  \tRs 80\n");
      printf(" \t\t\t 5- Thukpa        \tRs 100\n");
      printf(" \t\t\t 6- Potato Chily  \tRs 160\n");
      printf(" \t\t\t 7- Coke          \tRs 50\n");
      
      
      
      printf("\n");
}
void orderMeals()
{
	double totalPriceForAdult, totalPriceForChildren;
	double allPayment,discount;
         printf("                      \t\t**** ORDER MENUE****\n");  
         
         
        totalPriceForAdult =  orderForAdult();
        totalPriceForChildren = orderForChildren();
		allPayment = totalPriceForAdult + totalPriceForChildren ;
        
     printf("\n \t\t     \22************************************************************\22    \n");
     printf(" \t\t   *****************************  final BILL   ***************************      \n");
     printf(" \n\t\t\tadult/child\t\tcount\t\t\ttotal price\n");
     printf(" \t\t\tadults\t\t\t%d\t\t\tRs %5.2f\n",adultNumber,totalPriceForAdult);
     printf(" \t\t\tchildren\t\t%d\t\t\tRs %5.2f\n",childNumber,totalPriceForChildren);
     printf(" \t\t\tTotal bill with 13 VAT\t\t\t\tRs %5.2f\n",allPayment );
     
	 
     
     if(allPayment < 100)
		 discount=((allPayment * 0.5)/100);
     else if(allPayment>= 100 && allPayment<200)
          discount=((allPayment * 1)/100);
     else if(allPayment>= 200 && allPayment<300)
          discount=((allPayment * 1.5)/100);
     else if(allPayment>= 300 && allPayment<400)
          discount=((allPayment * 2.0)/100);
	 else 
		  discount= ((allPayment * 5.0)/100);

          printf(" \t\t\tTotal bill after discount\t\t\tRs %5.2f\n",allPayment-discount);
          
          
        
		
	printf(" \n\n\n\t\t   ***************************** Thank You  ***************************      \n");
}
double orderForAdult()
{
     int menuOption,i,amount;
      char response = 'y';
      double totalPerPerson = 0.0,totalAllPerson = 0.0;
      double tax = 13.0;
      if(adultNumber <=0)
		   printf("\n ");
	  else 
      printf("*\tadults:\n");
      for(i=0;i<adultNumber;i++)
     {
               printf("adult %d please enter your orders\n",i+1);
               while(response == 'y' || response == 'Y')
               {
                              printf("please enter your option:");
                              scanf("%d",&menuOption);
							  if(menuOption<1 || menuOption>7)
							  {
								  printf("sorry we don`t have this order \nagain! ");
								  continue;
							  }
                              printf("please enter your amount of order:");
                              scanf("%d",&amount);
                              
                              
                           totalPerPerson = totalPerPerson + (amount * price[menuOption - 1] );
                              
                              printf("\nWould you like to enter more orders(y/n):");
                              scanf("\n%c",&response);
               
                              
                           
               }
               printf("\n");
               totalAllPerson += totalAllPerson +  totalPerPerson;
               totalPerPerson = 0.0;
               response = 'y';
     }
     
     return totalAllPerson + ((totalAllPerson * tax) / 100);
}
double orderForChildren()
{
       int menuOption,i,amount;
      char response = 'y';
      double totalPerChild = 0.0,totalAllChildren = 0.0;
      double tax = 13.0,oneOrder;
       if(childNumber <=0)
		   printf("\n");
	   else
       printf("*\tChildren:\n");
       for(i=0;i<childNumber;i++)
     {
               printf("child %d please enter your orders\n",i+1);
               while(response == 'y' || response == 'Y')
               {
                              printf("please enter your option:");
                              scanf("%d",&menuOption);
							  if(menuOption<1 || menuOption>7)
							  {
								  printf("sorry we don`t have this order \nagain! ");
                                  continue;
							  }
                              printf("please enter your amount of order:");
                              scanf("%d",&amount);
                              
                              oneOrder = (price[menuOption - 1] * 60)/100 ;//this one order for a child with discount %60 of one order of adult
                              totalPerChild = totalPerChild + (amount * oneOrder)  ;
                              
							  printf("Would you like to enter more orders(y/n):");
                              scanf("\n%c",&response);
                              
                           
               }
               totalAllChildren += totalAllChildren +  totalPerChild;
               response = 'y';
               totalPerChild = 0.0;
               
               printf("\n");
               
     }
     system("cls");
     
     return totalAllChildren + ((totalAllChildren * tax) / 100);
}
