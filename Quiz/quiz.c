#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void insertscore();
void highscore();
void help();
void quit();

int main()
{
	mainmenu:
	system("cls");
    printf("\n\t\t\tC PROGRAM QUIZ GAME\n");
    printf("\n\t\t________________________________________\n");
    printf("\n\t\t\t   WELCOME ");
    printf("\n\t\t\t     TO ");
    printf("\n\t\t\t   THE GAME ");
    printf("\n\t\t________________________________________\n");
    printf("\n\t\t -> Press S to start the game");
    printf("\n\t\t -> Press V to view the highest score  ");
    printf("\n\t\t -> press H for help            ");
    printf("\n\t\t -> press Q to quit             ");
    printf("\n\t\t________________________________________\n\n");
	
	int score=0;
	char ch;
	fflush(stdin);
	char playername[20];
	
	printf("\n\n\t\tEnter Your Choice :");
	scanf("%c",&ch);
	ch=toupper(ch);
	
	if(ch=='S')
	{
		goto home;
	}
	else if(ch=='V')
	{
		highscore();
		goto mainmenu;
	}
	else if(ch=='H')
	{
		help();
		goto mainmenu;
	}
	else
	{
		quit();
	}
	home:
	system("cls");
    printf("\n\n\n\n\n\n\n\t\t\tRegister your name:");
    scanf("%s",&playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There is only 1 round in this Quiz Game");
    printf("\n >> Your game starts with 1 round that is CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 5 questions. Each right answer will be awarded you with 5 point!"); 
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously,");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
			goto quiz;
        }
	else
		{
         goto mainmenu;
        }
       	quiz:
		system("cls");
		int i;
		for(i=1;i<=5;i++)
		{
			switch(i)
			{
				case 1:
					printf("\n\nWhich of the following is a Palindrome number?");
					printf("\n\nA. 42042\t\tB. 101010\n\nC. 23232\t\tD. 01234\n\n");
					if (toupper(getch())=='C')
					{
			    		printf("\n\nCorrect!!!");
			    		printf("\n----------------------------------------------");
						score=score+5;
			    		getch();
			    		break;
					}
					else
		       		{
		           		printf("\n\nWrong!!! The correct answer is --> C. 23232");
		           		printf("\n----------------------------------------------");
		           		getch();
		       			break;
		       		}
		       	case 2:
					printf("\n\n\nWhich animal laughs like human being?");
					printf("\n\nA. Polar Bear\t\tB. Hyena\n\nC. Donkey\t\tD. Chimpanzee\n\n");
					if (toupper(getch())=='B')
					{
						printf("\n\nCorrect!!!");
						printf("\n----------------------------------------------");
						score=score+5;
						getch();
						break;
					}
					else
		       		{
					    printf("\n\nWrong!!! The correct answer is --> B. Hyena");
					    printf("\n----------------------------------------------");
		       		   	getch();
		       		  	break;
					}
				case 3:
					printf("\n\n\nStudy of Earthquake is called............,");
					printf("\n\nA. Seismology\t\tB. Cosmology\n\nC. Orology\t\tD. Etimology\n\n");
					if (toupper(getch())=='A')
					{
						printf("\n\nCorrect!!!");
						printf("\n----------------------------------------------");
						score=score+5;
						getch();
			 			break;
					}
					else
		       		{
					   printf("\n\nWrong!!! The correct answer is --> A. Seismology");
					   printf("\n----------------------------------------------");
					   	getch();
		      			break;
		       		}
				case 4:
					printf("\n\n\nWhat is the National Name of Japan?");
					printf("\n\nA. Polska\t\tB. Hellas\n\nC. Drukyul\t\tD. Nippon\n\n");
					if (toupper(getch())=='D')
					{
						printf("\n\nCorrect!!!");
						printf("\n----------------------------------------------");
						score=score+5;
						getch();
			 			break;
					}
					else
		       		{
					   printf("\n\nWrong!!! The correct answer is --> D. Nippon");
					   printf("\n----------------------------------------------");
					   getch();
		       		   break;
					}
				case 5:
					printf("\n\n\nWhich is the longest River in the world?");
					printf("\n\nA. Nile\t\tB. Koshi\n\nC. Ganga\tD. Amazon\n\n");
					if (toupper(getch())=='A')
					{
						printf("\n\nCorrect!!!");
						printf("\n----------------------------------------------");
						score=score+5;
						getch(); 
						break;
					}
					else
		      		{
					  printf("\n\nWrong!!! The correct answer is --> A. Nile");
					  printf("\n----------------------------------------------");
					  getch();
					  break;
					}
	
			}
		}		
	printf("\n\n\t\t Your Score is : %d",score);
	insertscore(playername,score);

}
void insertscore(char name[],int scr)
{
	FILE *fp;
	fp=fopen("Score.txt","a");
	if(fp==NULL)
	{
		printf("Cannot Open File");
	}
	fprintf(fp,"%s %d",name,scr);
	fclose(fp);
}
void highscore()
{
	system("cls");
	printf("\n\t\t------------------------------------ Highest Score ------------------------------------");
	FILE *fp;
	char name[20];
	int scr;
	fp=fopen("Score.txt","r");
	if(fp!=NULL)
	{
		while((fscanf(fp,"%s %d",name,&scr))!=EOF)
		{
 			printf("\n\n\n\t\t\t Name:- %s \t Score:- %d",name,scr);
 		}

		fclose(fp);
	}
	else
	{
		printf("\n\n\n\n\t\t\tNo Score Found!!!!");
	}
	
	getch();
}
void help()
{
	system("cls");
   	printf("\n\t\t------------------------------------------HELP------------------------------------------");
    printf("\n\n\t\t Here are some tips you might wanna know before playing:");
    printf("\n\t\t -------------------------------------------------------------------------");
    printf("\n\t\t >> There is only 1 round in this Quiz Game");
    printf("\n\t\t >> Your game starts with 1 round that is CHALLANGE ROUND. In this round you will be asked a");
    printf("\n\t\t    total of 5 questions. Each right answer will be awarded you with 5 point!"); 
    printf("\n\t\t >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n\t\t    right option.");
    printf("\n\t\t >> You will be asked questions continuously,");
    printf("\n\t\t >> No negative marking for wrong answers!");

    getch();
}
void quit()
{
	system("cls");
	printf("\n\n\n\n\n\t\t\t ******************* THANK YOU FOR USING THE APPLICATION *******************");
	exit(1);
}

