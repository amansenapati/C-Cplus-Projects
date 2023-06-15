#include<stdio.h>
#include<conio.h>
#include<process.h>
int main()
{
int x,y,r,ch;
float div;
menu:
system("cls");
printf("\n\n\n\t\t\t*********************************\n");
printf("\t\t\t****** Arithmatic Operation *****");
printf("\n\t\t\t*********************************\n");
printf("\t\t\t*    (1) Addition               *\n");
printf("\t\t\t*    (2) Subtraction            *\n");
printf("\t\t\t*    (3) Multiplication         *\n");
printf("\t\t\t*    (4) Division		*\n");
printf("\t\t\t*    (5) Remainder              *\n");
printf("\t\t\t*    (6) Exit		        *\n");
printf("\t\t\t*********************************\n");
printf("\t\t\t Enter your Choice :-  ");
scanf("%d",&ch);
switch(ch)
{

case 1:
system("cls");
printf("\n\n\n\n");
printf("\t\t\t\tAddition of Two Number\n");
printf("\t\t\t**********************************\n\n");
printf("\t\t\tEnter First Number:");
scanf("%d",&x);
printf("\n");
printf("\t\t\tEnter Second Number:");
scanf("%d",&y);
r=x+y;
printf("\n\t\t\tResult :- %d",r);
getch();
goto menu;

case 2:
system("cls");
printf("\n\n\n\n");
printf("\t\t\t\tSubtraction of Two Number\n");
printf("\t\t\t**********************************\n\n");
printf("\t\t\tEnter First Number:");
scanf("%d",&x);
printf("\n");
printf("\t\t\tEnter Second Number:");
scanf("%d",&y);
r=x-y;
printf("\n\t\t\tResult :- %d",r);
getch();
goto menu;

case 3:
system("cls");
printf("\n\n\n\n");
printf("\t\t\t\tMultiplication of Two Number\n");
printf("\t\t\t**********************************\n\n");
printf("\t\t\tEnter First Number:");
scanf("%d",&x);
printf("\n");
printf("\t\t\tEnter Second Number:");
scanf("%d",&y);
r=x*y;
printf("\n\t\t\tResult :- %d",r);
getch();
goto menu;

case 4:
system("cls");
printf("\n\n\n\n");
printf("\t\t\t\tDivision of Two Number\n");
printf("\t\t\t**********************************\n\n");
printf("\t\t\tEnter First Number:");
scanf("%d",&x);
printf("\n");
printf("\t\t\tEnter Second Number:");
scanf("%d",&y);
div=(float)x/y;
printf("\n\t\t\tResult :- %.2f",div);
getch();
goto menu;

case 5:
system("cls");
printf("\n\n\n\n");
printf("\t\t\t\tRemainder of Two Number\n");
printf("\t\t\t**********************************\n\n");
printf("\t\t\tEnter First Number:");
scanf("%d",&x);
printf("\n");
printf("\t\t\tEnter Second Number:");
scanf("%d",&y);
r=x%y;
printf("\n\t\t\tResult :- %d",r);
getch();
goto menu;

case 6:
system("cls");
printf("\n\n\n\n\n");
printf("\t\t\tThank you for using the application");
printf("\n\t\t\t************************************\n\n");
getch();
exit(0);

default:
system("cls");
printf("\n\n\n\n\n");
printf("\t\t\t\t    Invalid Choice");
printf("\n\t\t\t************************************");
getch();
goto menu;

}
return 0;
}
