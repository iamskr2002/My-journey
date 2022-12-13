#include<stdio.h>
                                            
int sum(int a, int b);                             // declaration of function for sum of two numbers
int difference(int a, int b);                      // function for difference of two numbers
float product(float n, float m);                   // function for product of two numbers
float divide(float n, float m);                    // function for division of two number

int main()
{
	int ch;                                         // variable for choice
	int a,s;                                        // a= first num , s= choice to repeat program
	int b;
	float m,n;
	label_name:                                    // point from where program will restart
	printf("\n************************** Calculator for Two entries Only *******************************\n");
	printf("\n");
	printf("\t\t\n 1. Sum \t\t\n 2. Difference \t\t\n 3. Multiply \t\t\n 4. Divide \n");
	printf("\n\22***************************************************************************\22 \n");
	printf("\n \t\tSelect Your Choice : ");
	scanf("%d",&ch);
	if(ch==2){                                                   // difference of two num
	    printf("\n\22***************************************************************************\22");
	    printf("\n******************************** Difference *************************************\n");
	    printf("\n");
		printf("\nEnter the First/Biggest Number : ", a);
		scanf(" %d", &a);
		printf("Enter the Second/Small Number : ", b);
		scanf("%d", &b);
		printf("\n Difference is : %d", difference(a,b));       // function call
		printf("\n");
		printf("\n\22***************************************************************************\22");
	    printf(" \n\n Press 2 to continue. \n Press any key to exit.");              // option for repeatition
		printf("\n Choice: ", s);
		scanf("%d", &s);
		if(s==2){
		goto label_name;                                      // from the point program will get back to the top
	    }
	    else{
	    	printf("\n************************** THANK YOU *******************************\n");
		}
	}
	
	else if(ch==1){                                            // sum of the nums
	    printf("\n\22***************************************************************************\22");
    	printf("\n******************************** Sum  *************************************\n");
	    printf("\n");
		printf("\nEnter the First Number : ", a);
		scanf(" %d", &a);
		printf("Enter the Second Number : ", b);
		scanf("%d", &b);
		printf("\n Sum is : %d", sum(a,b));                     // function call
		printf("\n");
		printf("\n\22***************************************************************************\22");
		printf(" \n\n Press 2 to continue. \n Press any key to exit.");
		printf("\n Choice: ", s);
		scanf("%d", &s);
		if(s==2){
		goto label_name;                                      // from the point program will get back to the top
	    }
	    else{
	    	printf("\n************************** THANK YOU *******************************\n");
		}
	}
	
	else if(ch==3){                                            // product of two nums
	    printf("\n\22***************************************************************************\22");
	    printf("\n******************************** Product  *************************************\n");
	    printf("\n");
		printf("\nEnter the First Number : ", m);
		scanf(" %f", &m);
		printf("Enter the Second Number : ", n);
		scanf("%f", &n);
		printf("\n Sum is : %f", product(m,n));	               // function call
		printf("\n");
		printf("\n\22***************************************************************************\22");
		printf(" \n\n Press 2 to continue. \n Press any key to exit.");
		printf("\n Choice: ", s);
		scanf("%d", &s);
		if(s==2){
		goto label_name;                                      // from the point program will get back to the top
	    }
	    else{
	    	printf("\n************************** THANK YOU *******************************\n");
		}
	}

	
	else if(ch==4){                                            // divison of two nums
	    printf("\n\22***************************************************************************\22");
	    printf("\n******************************** Divison  *************************************\n");
    	printf("\n");
		printf("\nEnter the First Number : ", m);
		scanf(" %f", &m);
		printf("Enter the Second Number : ", b);
		scanf("%f", &n);
		printf("\n Sum is : %f", divide(m,n));                // function call
		printf("\n");
		printf("\n\22***************************************************************************\22");
	    printf(" \n\n Press 2 to continue. \n Press any key to exit.");
		printf("\n Choice: ", s);
		scanf("%d", &s);
		if(s==2){
		goto label_name;                                      // from the point program will get back to the top
	    }
	    else{
	    	printf("\n************************** THANK YOU *******************************\n");
		}
	}
	
	else {
	    printf("\n\22***************************************************************************\22");
    	printf("\n****************************** Sorry, Wrong Input ***********************************\n");
    	printf("\n\22***************************************************************************\22");
    	printf("\n");
		printf(" \n\n Press 2 to continue. \n Press any key to exit.");
		printf("\n Choice: ", s);
		scanf("%d", &s);
		if(s==2){
		goto label_name;                                       // from the point program will get back to the top   
	    }
	    else{
	    	printf("\n************************** THANK YOU *******************************\n");
		}
	}
	
}
    

int sum(int a, int b){                                       // definition of sum fuction
	return a+b;
}
	
int difference(int a, int b){                               // definition of difference fuction
	if(a>b){
		return a-b;
	}
	else if(b>a){
		return b-a;
	}
	else {
		return 0;
	}
}

float product(float n, float m){                            // definition of product fuction
	return n*m;
}

float divide(float n, float m){                            // definition of division fuction
	return n/m;
}
