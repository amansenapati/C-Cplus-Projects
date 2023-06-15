#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
#include<string.h>
#include<dos.h>
#include<process.h>


class stu
{
char na[10],b[10],fa[10],cn[10];
int cl,rn;
float cg;
public:
void input()
{
cout<<"\nEnter Student Rollno. :";
cin>>rn;
cout<<"\nEnter Student Branch. :";
cin>>b;
cout<<"\nEnter Student Cgpa : ";
cin>>cg;
}
void input1()
{
cout<<"\nEnter Student Name :";
gets(na);
cout<<"\nEnter Student Father's Name :";
cin>>fa;
cout<<"\Enter Student Contact No.";
cin>>cn;
cout<<"\nEnter Student Rollno. :";
cin>>rn;
}

void show()
{
cout<<"\n\n\tStudent Rollno. : "<<rn<<"\n\tStudent Branch : "<<b<<"\n\tStudent Cgpa : "<<cg<<endl;
}
void show1()
{
cout<<"\n\n\tStudent Name   : "<<na<<"\n\tStudent Father's Name  : "<<fa<<"\n\tStudent Contact No. : "<<cn<<"\n\tStudent Rollno. : "<<rn<<endl;
cout<<"\n\n";
}
int roll()
{
return rn;
}
};


void intro()
{
clrscr();
gotoxy(20,4);
textcolor(YELLOW);
cprintf("******STUDENT DATABASE MANAGEMENT SYSTEM******");
}


void login()
{
char n[5],p[4];
gotoxy(30,7);
textcolor(5);
cprintf("LOGIN:-");
textcolor(RED);
cprintf("\n\n\nUsername :");
cin>>n;
if(strcmp(n,"aman")==0)
{
}
else
{
cout<<"\n\n\t\t\t\tWrong Username";
delay(5000);
exit(0);
}
cprintf("\n                                    Password :");
for(int i=0;i<4;i++)
{
p[i]=getch();
cout<<"*";
}
p[i]='\0';
if(strcmp(p,"csee")==0)
{
}
else
{
cout<<"\n\n\t\t\t\tWrong Password";
delay(5000);
exit(0);
}
}


void login2()
{
char n[5],p[5];
gotoxy(30,7);
textcolor(5);
cprintf("ADMIN LOGIN:-");
textcolor(RED);
cprintf("\n\n\nUsername :");
cin>>n;
if(strcmp(n,"admin")==0)
{
}
else
{
cout<<"\n\n\t\t\t\tWrong Username";
delay(5000);
exit(0);
}
cprintf("\n                                          Password :");
for(int i=0;i<5;i++)
{
p[i]=getch();
cout<<"*";
}
p[i]='\0';
if(strcmp(p,"admin")==0)
{
}
else
{
cout<<"\n\n\t\t\t\tWrong Password";
delay(5000);
exit(0);
}
}

void loginpage()
{
window(1,1,80,50);
	textbackground(3);
	clrscr();
}


void loading()
{
int j;
textcolor(YELLOW);
cprintf("\n\n\n\n\nLOADING");
for(j=1;j<=20;j++)
{
delay(400);
cprintf(".");
}
}


void insert()
{
stu ob;
fstream file;
file.open("s1.txt",ios::app|ios::binary);
ob.input();
file.write((char*)&ob,sizeof(ob));
file.close();
}


void insert1()
{
stu ob;
fstream file;
file.open("s11.txt",ios::app|ios::binary);
ob.input1();
file.write((char*)&ob,sizeof(ob));
file.close();
}


void display()
{
stu ob;
fstream file;
file.open("s1.txt",ios::in|ios::binary);
while(file.read((char*)&ob,sizeof(ob)))
{
ob.show();
}
file.close();
}

void display1()
{
stu ob;
fstream file;
file.open("s11.txt",ios::in|ios::binary);
while(file.read((char*)&ob,sizeof(ob)))
{
ob.show1();
}
file.close();
}


void update(int x)
{
int flag=0;
stu ob;
fstream file;
file.open("s1.txt",ios::out|ios::in|ios::binary);
while(file)
{
file.read((char*)&ob,sizeof(ob));
if(ob.roll()==x)
{
int pos=(-1)*sizeof(ob);
file.seekg(pos,ios::cur);
ob.input();
file.write((char*)&ob,sizeof(ob));
cout<<"\n\n\t....Record updated...."<<endl;
flag=1;
break;
}
}
if(flag==0)
{
cout<<"\n Record not updated....."<<endl;
}
file.close();
}

void search(int x)
		{
		int flag=0;

		stu ob;
		fstream file;

		file.open("s11.txt",ios::out|ios::in|ios::binary);

		while(file)
		{
		 file.read((char*)&ob,sizeof(ob));

			if(ob.roll()==x)
			{
			ob.show1();
		       flag=1;
			break;
			}
			}

			if(flag==0)
			cout<<"\n Record not found....";
			file.close();
			}


void del(int n)
{
stu ob;
ifstream infile;
ofstream outfile;
outfile.open("temp.txt",ios::binary);
infile.seekg(0,ios::beg);
while(infile.read((char*)&ob,sizeof(ob)))
{
if(ob.roll()!=n)
{
outfile.write((char*)&ob,sizeof(ob));
}
}
infile.close();
outfile.close();
remove("s1.txt");
rename("temp.txt","s1.txt");
cout<<"\n\t.....Record deleted.....";
}


void main()
{
clrscr();
int ch,ch2;
int ch1;
char ch3;
loginpage();
login();
loading();
do
{
clrscr();
cout<<"\n\n\n\n...........MAIN MENU..........." <<endl;
    cout<<"\n==============================="<<endl;
    cout<<"\n 1. ADMIN ........"<<endl;
    cout<<"\n 2. USER ........."<< endl;
    cout<<"\n==============================="<<endl;
    cout<<"\n Please  Select  Your  Option  (1-2)  : ";
    cin>>ch;
if(ch==1)
{
clrscr();
login2();
clrscr();
intro();
cout<<"\n\n\t\t\t******ADMIN******"<<endl;
cout<<"\n==============================="<<endl;
	     cout<<"\n 1. Add Records "<<endl;
	     cout<<"\n 2. Display Records  "<<endl;
	     cout<<"\n 3. Update Records "<<endl;
	     cout<<"\n 4. Delete Records  "<<endl;
	     cout<<"\n 5. Exit"<<endl;
	     cout<<"\n==============================="<<endl;
	     cout<<"\n Please  Select  Your  Option  (1-5)  : ";
cin>>ch1;
switch(ch1)
{
case 1:
{
clrscr();
insert();
break;
}
case 2:
{
clrscr();
display();
break;
}
case 3:
{
clrscr();
int x;
display();
cout<<"\n Enter Student Rollno To Be Updated : ";
cin>>x;
update(x);
break;
}
case 4:
{
clrscr();
int n;
cout<<"\n Enter Student Rollno To Be Deleted : ";
cin>>n ;
del(n);
break;
}
case 5:
{
exit(0);
break;
}
}
}
else if(ch==2)
{
clrscr();
intro();
cout<<"\n\n\t\t\t******USER******"<< endl;
cout<<"\n==============================="<<endl;
	     cout<<"\n 1. Add Records "<<endl;
	     cout<<"\n 2. Display Records  "<<endl;
	     cout<<"\n 3. Search "<<endl;
	     cout<<"\n 4. Exit"<<endl;
	     cout<<"\n==============================="<<endl;
	     cout<<"\n Please  Select  Your  Option  (1-4)  : ";
cin>>ch2;
switch(ch2)
{
case 1:
{
clrscr();
insert1();
break;
}
case 2:
{
clrscr();
display1();
break;
}
case 3:
{
clrscr();
int x;
cout<<"\nEnter roll no. to be search:";
cin>>x;
search(x);
break;
}
case 4:
{
exit(0);
break;
}
}
}
cout<<"\n\nDo you want to continue";
cout<<"\nPress Y:";
cin>>ch3;
}while(ch3=='y'||ch3=='Y');
getch();
}
