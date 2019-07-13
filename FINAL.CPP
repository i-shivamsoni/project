#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
class hotel{
public:
int c,nor,nday,rate,r1,rno;
char name[20],add[20],pno[20],rtype[100];

void view();
void input();
void istore();
void read();
void search();
void update();
void dlt();
void food();
void rooms();
void menu();
void facilities();
void feedback();
int billing();
 }ob;
int hotel:: billing(){
int fdc,fc,rrc;
fstream f;
char sch1[20],cho;
cout<<"\nenter the name to search\n";
f.open("htlmn.txt",ios::in|ios::binary);
cin>>sch1;
f.read((char*)&ob,sizeof(ob));
while(!f.eof()){
if(!strcmp(sch1,name))
rrc=nor*nday*rate;
f.read((char*)&ob,sizeof(ob));
}
f.close();
cout<<"the room rent is "<<rrc;
fdc=rand()%30+1500;
cout<<"\nthe food & drinks charge is "<<fdc;
fc=rand()%30+1000;
cout<<"\nthe facilities charge is "<<fc;
cout<<"\nthe total charge is "<<rrc+fdc+fc;
cout<<"\nwant to check out press y for yes\nn for no & extending your stay \np for exit";
cin>>cho;
if(cho=='y'){dlt();
}
if(cho=='n'){update();
}
if(cho=='p'){exit(0);}
return 0;
}
void hotel::rooms(){
cout<<"\n\n\t\tTHE ROOMS MENU";
cout<<"\n\t\t1.Premier Rooms			     1500rs/day\n";
cout<<"\n\t\t2.Premier Rooms with Pool View	     3000rs/day\n";
cout<<"\n\t\t3.Premier Rooms with Semi Private Pool  5000rs/day\n";
cout<<"\n\t\t4.Luxury Suites with Private Pool	     7000rs/day\n";
cout<<"\n\t\t5.Kohinoor Suite with Private Pool	    10000rs/day\n";
cout<<"\n\t\t6.for exit\n\n\t\t7.for total bill			 ";
	 }
void hotel:: food(){
cout<<"\n\t\t*Food & Drink			*On-site coffee house\n";
cout<<"\n\t\t*Chocolate/cookies(Add char)	*Fruits Additional charge\n";
cout<<"\n\t\t*Bottle of water	   *Special diet menus (on request)\n";
cout<<"\n\t\t*Restaurant			*Good coffee!\n";

}

void hotel:: facilities(){
cout<<"\n\t\t*General				*Facilities for disabled guests";
cout<<"\n\t\t*Parking(free)	  *Entertainment and family services(E)\n";
cout<<"\n\t\t*Reception services(E)		*Internet (free)\n";
cout<<"\n\t\t*Transport(add. char)		*Cleaning services(E)\n";
cout<<"\n\t\t*Business facilities(add. char)    *Wellness facilities(add. char)\n";
cout<<"\n\t\t*Services & Extras(add. char)     	*Activities(E)\n";

cout<<"\n\t\t*Most popular facilities\n";
cout<<"\n\t\t*Free WiFi  		*Free parking  \n";
cout<<"\n\t\t*Non-smoking rooms  	*Fitness centre \n";
cout<<"\n\t\t*Airport shuttle           *Swimming pool";
}
void hotel:: menu(){
int ab;
do{ textbackground(BLACK);
textcolor(YELLOW);
clrscr();
cout<<"\npress 1 for rooms\npress 2 for food\npress 3 for facilities";
cout<<"\npress 4 for exit";
cout<<"\nenter your choice  ";
cin>>ab;
switch(ab){
case 1:
cout<<"\n\n";
 rooms();cout<<"\n\n";
 getch();
break;
case 2:
cout<<"\n\n";
food();cout<<"\n\n";
getch();
break;
case 3:
cout<<"\n\n";  facilities();cout<<"\n\n";
getch();
break;
case 4: // exit(0);
break;
default : cout<<"inavlid choice";
}
}
while(ab!=4);
}



 void hotel::input()
{
		rno=rand()%100+1;
	  cout<<"\n\t\tENTER ROOM NO.	      : "<<rno;
	  cout<<"\n\t\tENTER CUSTOMER NAME 	: ";
	  gets(name);
	  cout<<"\n\t\tENTER ADDRES   	        : ";
	  gets(add);
	  cout<<"\n\t\tENTER CONTACT NUMBER  	: ";
	  gets(pno);
	  cout<<"\n\t\tENTER NUMBER OF ROOMS 	: " ;
	  cin.ignore();
	  cin>>nor;
	  cout<<"\n\t\tENTER NUMBER OF DAYS  	: ";
	  cin.ignore();
	  cin>>nday;
	  cout<<"\n\n\t\tTHE ROOMS MENU";
	  cout<<"\n\t\t1.Premier Rooms			     1500rs/day\n";
	  cout<<"\n\t\t2.Premier Rooms with Pool View		     3000rs/day\n";
	  cout<<"\n\t\t3.Premier Rooms with Semi Private Pool	     5000rs/day\n";
	  cout<<"\n\t\t4.Luxury Suites with Private Pool	     7000rs/day\n";
	  cout<<"\n\t\t5.Kohinoor Suite with Private Pool	    10000rs/day\n";
	  cout<<"\n\t\t6.for exit\n\n\t\t7.for total bill			 ";
	  cout<<"\n\t\t Enter the choice ";
	  cin.ignore();
	  cin>>c;
	switch(c)
	{
	 case 1:      rate=1500;

			strcpy(rtype,"Premier Rooms");
			break;

	case 2:      rate=3000;

			strcpy(rtype,"Premier Rooms with Pool View");
			break;
	case 3:      rate=5000;

			strcpy(rtype,"Premier Rooms with Semi Private Pool");
			break;
	case 4:      rate=7000;

			strcpy(rtype,"Luxury Suites with Private Pool");
			break;
	case 5:      rate=10000;

			strcpy(rtype,"Kohinoor Suite with Private Pool");
			break;



	 case 6:      exit(1);

	 case 7:      	cout<<"\n"<<nor*nday*rate;
	 default :	cout<<"invalid choice ";

	}
		istore();
       //return nor*nday*rate;
	}


void hotel::istore(){
fstream f;
f.open("htlmn.txt",ios::out|ios::app|ios::binary);
f.write((char*)&ob,sizeof(ob));
f.close();
}



void hotel::read(){
fstream f;
f.open("htlmn.txt",ios::in);
f.read((char*)&ob,sizeof(ob));
while(!f.eof()){
view();
f.read((char*)&ob,sizeof(ob));

}
f.close();
 }
void hotel::view(){
      cout<<rno<<" "<<name<<" "<<add<<" "<<pno<<" "<<rtype<<" "<<nor<<" "<<nday<<"\n";
}

void hotel::search(){
fstream f;
char sch[20]; int a=0;
cout<<"\nenter the name to search\n";
f.open("htlmn.txt",ios::in|ios::binary);
cin>>sch;
f.read((char*)&ob,sizeof(ob));
while(!f.eof()){
if(!strcmp(sch,name))
{a++;}
f.read((char*)&ob,sizeof(ob));
}
if(a>0){
cout<<"the  custumer is staying in the hotel"; }
f.close();
}

void hotel::update(){
fstream f;
char upp[20]; //int b=0;
f.open("htlmn.txt",ios::in|ios::out|ios::ate);
f.seekg(0);
f.read((char*)&ob,sizeof(ob));
cout<<"\nenter the name to update\n";
cin>>upp;
while(!f.eof()){
if(!strcmp(upp,name))
{cout<<"\num of days you have stayed "<<nday;}
if(!strcmp(upp,name))
{f.seekp(f.tellp()-sizeof(ob));
input();
f.write((char*)&ob,sizeof(ob));
 break;}

f.read((char*)&ob,sizeof(ob));
 }

 f.close();
 read();
}

void hotel::dlt()
{	 char del[10];

	ifstream q;
	ofstream v;
	char choice;
	q.open("htlmn.txt",ios::in);
	v.open("temp.txt",ios::out);
	q.read((char *)&ob,sizeof(ob));
	cout<<"enter the name you want to delete ";
	cin>>del;
	while(!q.eof())
	{
	if (strcmp(del,name))
	{  	v.write((char *)&ob,sizeof(ob));
	}
	q. read((char *)&ob,sizeof(ob));
	}
	v.close();
	q.close();
	remove("htlmn.txt");
	rename("temp.txt","htlmn.txt");
}




void main(){
int ac,ch;
clrscr();
textbackground(BLACK);
textcolor(YELLOW);
clrscr();
cout<<"\n\n\n\n\n\n\t\t\tWELCOME PRESS ANY KEY TO CONTINUE.......";
getch();


do{
textbackground(BLACK);
textcolor(YELLOW);
clrscr();
cout<<"\t\t\t**************************************\n";
cout<<"\t\t\t|  WELCOME TO HOTEL POTTER HEADS     |\n";
cout<<"\t\t\t**************************************\n";
cout<<"\n\n";
cout<<"\t\t\t**************************************\n";
cout<<"\t\t\t*  press 1 for seeing the menu card  *\n";
cout<<"\t\t\t*  press 2 for booking a Room        *\n";
cout<<"\t\t\t*  press 3 for checking records      *\n";
cout<<"\t\t\t*  press 4 for updating records      *\n";
cout<<"\t\t\t*  press 5 for searching a Person    *\n";
cout<<"\t\t\t*  press 6 for delete the record     *\n";
cout<<"\t\t\t*  press 7 for checkout              *\n";
cout<<"\t\t\t*  press 8 for feedback              *\n";
cout<<"\t\t\t*  press 0 for exit                  *\n";
cout<<"\t\t\t**************************************\n";

cout<<"\n\n\t\tenter your choice in integers values ";
cin>>ch;
switch(ch){
case 1:
ob.menu();
getch();
break;
case 2: ob.input();
getch();
break;
case 3: ob.read();
	getch();
break;
case 4: ob.update();
getch();
break;
case 5:  ob.search();
getch();
break;
case 6: ob.dlt();
getch();
break;
case 7: ob.billing();
getch();
break;
case 8: ob.feedback();
getch();
break;
case 0:cout<<"\n";
exit(1);
break;
default: cout<<"inavlid choice ,enter your choice again\n";
getch();
}

}
while(!ch==0);

getch();
}

void hotel::feedback(){
int qw;char fed[1000];
cout<<"press 1 for writing feedbacks\n";
cout<<"press 2 for viewing previous feedbacks\n";
cout<<"press 3 for exit";
cin>>qw;
switch(qw){
case 1:fstream f;
f.open("feedback.txt",ios::out|ios::app|ios::binary);
cout<<"enter your feedback from below line\n";
cin>>fed;
f.write((char*)&ob,sizeof(ob));
f.close();
break;
case 2:
fstream f1;
f1.open("feedback.txt",ios::in);
f1.read((char*)&ob,sizeof(ob));
while(!f1.eof()){
cout<<fed;
f1.read((char*)&ob,sizeof(ob));}
f1.close();
break;
case 3://exit(0);
break;
}
}