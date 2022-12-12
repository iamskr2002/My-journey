#include<stdio.h>
#include<string.h>
#include <conio.h>

int lockingpw();  

struct student{
	int rollno;
	int marks;
	char name[100];
};

int main(){
	int i;
	int n;
	int c;
	int a;
	int b;
	char naame[100];
	lockingpw(); 
	system("cls");  
	printf("\n 1. Create a new file \n 2. Add details in previous file.");
	printf("\n");
	printf("\n\n--------------------------------------------------------------");
	
	printf("\n Enter your Choice: ");
	scanf("%d", &c);
	
	if (c==1){
		
	FILE *fptr;
	fptr = fopen("subham.txt","w");
	
	fprintf(fptr, "Roll no \t");
	fprintf(fptr, "Name\t\t\t");
	fprintf(fptr, "marks \t");
	
	system("cls");  	
	printf("\n Enter the number of students: ");
	scanf("%d", &n);
	struct student ece[100];
	for (i = 1; i <= n ; i++) {
		{
			printf("\n");
		}
		printf("\n Roll no: %d ", i);
	    fprintf(fptr, "\n %d \t \t ", i);
	    printf("\n Enter the name: ");
	    scanf("%s", &naame);
	    strcpy(ece[i].name, &naame);
	    fprintf(fptr, "%s \t\t", ece[i].name);
	    printf("Enter the marks: ");
	    scanf("%d", &ece[i].marks);
	    fprintf(fptr, "%d", ece[i].marks);
    }
    
    system("cls");  
	for (i=1; i<=n; i++){
	printf("\n Student roll = %d", i);
	printf("\n Student name= %s", ece[i].name);
	printf("\n Student grade= %d", ece[i].marks);
	{
		printf("\n");
	}
}
	fclose(fptr);	
	return 0;
}

else if(c==2){
	
	FILE *fptr;
	fptr = fopen("subham.txt","a");
	
	system("cls");  
	printf("Enter the number of Previously recorded students: ");
	scanf("%d", &b);
	printf("Enter the number of new tudents: ");
	scanf("%d", &a);
	struct student ece[100];
	for (i = b+1; i <= b+a ; i++) {
		{
			printf("\n");
		}
		printf("\n Roll no: %d ", i);
	    fprintf(fptr, "\n %d \t \t ", i);
	    printf("\n Enter the name: ");
	    scanf("%s", &naame);
	    strcpy(ece[i].name, &naame);
	    fprintf(fptr, "%s \t\t", ece[i].name);
	    printf("Enter the marks: ");
	    scanf("%d", &ece[i].marks);
	    fprintf(fptr, "%d", ece[i].marks);
    }
    
	for (i=1; i<=n; i++){
	printf("\n Student roll = %d", i);
	printf("\n Student name= %s", ece[i].name);
	printf("\n Student grade= %d", ece[i].marks);
	{
		printf("\n");
	}
}
	fclose(fptr);	
	return 0;
}

}

int lockingpw(){                                         // defining function for locking the program
	int pw;
	do{                                           // do while loop runs the program continuously until right password is given
		// system("cls");
		printf("\n\n \t\t\t\t\t ###### Welcome To Student Management System ######");
		printf("\n\n\n \t\t\t Username: admin123");
		printf("\n \t\t\t Password: ");
		scanf("%d", &pw);
		printf("\n \t\t\t Sorry, wrong Password");
	}while(pw!= 12345);                                    // right password is= "12345"
}
