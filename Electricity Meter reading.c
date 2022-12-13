#include<stdio.h>

float netunits(float a, float b);                                           // function declared for getting units used
int main()
{
	char name[20];                                                         // name of the customer
	float a,b;                                                             // entries of the past and present units
	char month[20];
	printf("\n************************** Electricity Billing  *******************************\n");
	printf("\n Please, enter your name : ");
	scanf("%s", &name);
	printf("\n Please, enter the month : ");
	scanf("%s", &month);
	printf("\nEnter the privous readings/units : ");
	scanf("%f", &a);
	printf("\nEnter the present readings/units : ");
	scanf("%f", &b);
	netunits(a,b);                                                        // function call for units use calculation
    printf("\n\22***************************************************************************\22");
	printf("\n******************************** Invoice  *************************************\n");
	printf("\n");
	printf("\t\t\t\t\t\t Month: %s \n",month);
	printf("\n Name \t\t\t No. of Units \t\t\t Amount");	
	printf("\n Mr/Mrs. %s",name);
	printf("\t\t %f ", netunits(a,b));
	printf("\t\t\t Rs %f", netunits(a,b)*12);            // function used for the calculation of amount at rate of Rs 12/ unit
	printf("\n");
	printf("\n");
	printf("\n");
	printf(" \t\t   \tTotal bill \t\t\tRs %f\n", netunits(a,b)*12);
	printf("\n");
	printf("\n************************** THANK YOU *******************************\n");
	return 0;
	
}

float netunits(float a, float b){
	if(a<b){
		return b-a;
	}
	
	else if(b<a){
		return a-b;
	}
	
	else {
	printf("Sorry input is error");
	}

}
