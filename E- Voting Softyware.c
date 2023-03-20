#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define CANDIDATE_COUNT                                                  // data function define for the name of candidates

#define CANDIDATE1 "RRR"                                                 // data function define for the displaying names
#define CANDIDATE2 "KGF"
#define CANDIDATE3 "SITA RAMAM"
#define CANDIDATE4 "VIKRAM"

void castVote();                                                       // function declare for the casting vote                              
void votesCount();                                                     // function declare for the counting vote  
void getLeadingCandidate();                                            // function declare for finding the winner
int lockingpw();                                                       // function declare for locking the program.  

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledvotes=0;     // initializing values 0 for the vote count

int main()
{
	int back;                                              // variable for returning
	int choice;                                            // variable for getting choice of main menu
	label_name1:                                           // label to get back to lockscreen
	lockingpw();                                           // function call to lock the program
	label_name:                                            // label name for getting to the main menu or exit point
	system("cls");                                         // function for clearing the screen
	printf("\n\n \t\t\t\t\t ###### Welcome To Election 2022 ######");
	printf("\n\n 1. Cast The Vote");
	printf("\n\n 2. Find The Vote Count");
	printf("\n\n 3. Find leading Candidate");
	printf("\n\n 4. Lock the program");
	printf("\n\n 0. Exit");
	printf("\n\n--------------------------------------------------------------");
	
	printf("\n\n Please enter your Choice: ");
	scanf("%d", &choice);
	
	if(choice==1){
		castVote();                                        // function call to cast vote
		goto label_name;                                   // take me to the main menu or exit point
	}
	
	else if(choice==2){
		votesCount();                                      // function call to count vote
		printf("\n\n--------------------------------------------------------------");
		printf("\n\n Press 1 to get back to menu: ");
	    scanf("%d", &back);
	    if(back==1){                                      // user should press 1 to get back
		goto label_name;                                  // take me to the main menu or exit point
    	}
	}
	
	else if(choice==3){
		getLeadingCandidate();                             // function call to find winner
		printf("\n\n--------------------------------------------------------------");
		printf("\n\n Press 1 to get back to menu: ");
	    scanf("%d", &back);
	    if(back==1){                                      // user should press 1 to get back
		goto label_name;                                  // take me to the main menu or exit point
    	}
    }
    	
    else if(choice==4){
    	printf("\n");
    	system("cls");
    	goto label_name1;                                 // label to go to lock screen
	   }
}

void castVote(){                                          // defining function for casting vote
	int choice;
	do{                                                   // do while loop takes vote for continuous number of times
	system("cls");
	printf("\n\n \t\t\t\t\t ### Please choose your Candidate ####\n\n");
	printf("\n\n 1. %s", CANDIDATE1);
	printf("\n\n 2. %s", CANDIDATE2);
	printf("\n\n 3. %s", CANDIDATE3);
	printf("\n\n 4. %s", CANDIDATE4);
	printf("\n\n--------------------------------------------------------------");
	
	printf("\n\n Input Your Choice(1-4): ");               // choosing the right candidate
	scanf("%d", &choice);
	
	switch(choice){
		case 1: votesCount1++;                            // adds vote to the candidate 1
		break;
		
		case 2: votesCount2++;                            // adds vote to the candidate 2
		break;
		
		case 3: votesCount3++;                            // adds vote to the candidate 3
		break;
		
		case 4: votesCount4++;                            // adds vote to the candidate 4
		break;
		
		case 5: spoiledvotes++;                           // adds vote to the candidate 5
		break;
		
		default:
			printf("\n Error: Wrong Choice !! Please retry");
			
			getchar();
	}
	   {
	      printf("\n\n Thank You For Voting!!");
	   }
	}while(choice!=9804);                                       // enter the code : '9804' to stop taking votes
} 

void votesCount(){                                             // defining function for counting vote
	system("cls");
	printf("\n\n \t\t\t\t ##### Voting Statics #####");
	printf("\n\n %s - %d", CANDIDATE1, votesCount1);           // prints the number of votes
	printf("\n\n %s - %d", CANDIDATE2, votesCount2);
	printf("\n\n %s - %d", CANDIDATE3, votesCount3);
	printf("\n\n %s - %d", CANDIDATE4, votesCount4);
	printf("\n\n %s - %d", "Spoiled Votes", spoiledvotes);
}

void getLeadingCandidate(){                                    // defining function for finding winner
	system("cls");
	printf("\n\n \t\t\t\t #### Leading Candidate #### \n\n");
	if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1>votesCount4)
	printf("[%s]", CANDIDATE1);
	
	else if(votesCount2>votesCount1 && votesCount2>votesCount3 && votesCount2>votesCount4)
	printf("[%s]", CANDIDATE2);
	
	else if(votesCount3>votesCount1 && votesCount3>votesCount2 && votesCount3>votesCount4)
	printf("[%s]", CANDIDATE3);
	
    else if(votesCount4>votesCount1 && votesCount4>votesCount3 && votesCount4>votesCount2)
	printf("[%s]", CANDIDATE4);
	
	else
	printf("----- Warning !!! No-win Situation-----");
}

int lockingpw(){                                         // defining function for locking the program
	int pw;
	do{                                           // do while loop runs the program continuously until right password is given
		// system("cls");
		printf("\n\n \t\t\t\t\t ###### Welcome To Election 2022 ######");
		printf("\n\n\n \t\t\t Username: admin123");
		printf("\n \t\t\t Password: ");
		scanf("%d", &pw);
		printf("\n \t\t\t Sorry, wrong Password");
	}while(pw!= 12345);                                    // right password is= "12345"
}
