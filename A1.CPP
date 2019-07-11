#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void rooms{
cout<<"1.Premier Rooms					1500rs/day\n";
cout<<"2.Premier Rooms with Pool View			3000rs/day\n";
cout<<"3.Premier Rooms with Semi Private Pool		5000rs/day\n";
cout<<"4.Luxury Suites with Private Pool		7000rs/day\n";
cout<<"5.Kohinoor Suite with Private Pool	       10000rs/day\n";

void rooms();
cout"enter your choice";
cin>>rch;
switch(rch){
case 1:
break ;
case 2:
break ;
case 3:
break ;
case 4:
break ;
case 5:
break ;
default: inavlid choice;
break;}
}
struct details{



}




class hotel
{
public:
char name[30],nty[20],add[50],pnum[50],idn[50],idt[10];
char ch,cc;
void view();
void input()
{
cout<<"enter the name ";
//cin>>name;
gets(name);
cout<<"enter the nationality ";
//cin>>nty;
gets(nty);
cout<<"enter the address ";
//cin>>add;
gets(add);
cout<<"enter the phone num ";
//cin>>pnum;
cout<<"type of id ";
cin>>idt;
cout<<"id number";
cin>>idn;
gets(pnum);
}
void index()
{
fstream f;
f.open("htlmng.txt",ios::out|ios::app);
f<<"name"<<"\t"<<"nationality"<<"\t"<<"address"<<"\t\t"<<"phone num"<<"\n";
f.close();
}
void store(){
fstream f;
f.open("htlmng.txt",ios::out|ios::app);
//f<<"name"<<"\t"<<"nationality"<<"\t"<<"address"<<"\t\t"<<"phone num"<<"\n";
f<<name<<"\t"<<nty<<"\t\t"<<add<<"\t"<<pnum<<"\n";
f.close();
}
void display();

}ob;
void hotel :: display()
{
fstream f1;
f1.open("htlmng.txt",ios::in);
f1>>name>>nty>>add>>pnum;
while(!f1.eof())
{
view();
f1>>name>>nty>>add>>pnum;
}
f1.close();
}
void hotel::view()
{
cout<<name<<"\t"<<add<<"\t"<<nty<<"\t"<<pnum<<"\n";
}

int main()
{int ch;
clrscr();
//ob.index();
//ob.input();
//ob.store();
//ob.view();
//ob.display();
do{
cout<<"WELCOME TO HOTEL POTTER HEADS\n";
cout<<"press 1 for seeing the menu card\n";
cout<<"press 2 for checking availbility\n";
cout<<"press 3 for booking a Room\n";
cout<<"press 4 for searching a Person\n";
cout<<"press 5 for checkout\n";
cout<<"press 6 for feedback\n";
cout<<"press 7 for lost and found items\n";
cout<<"press 0 for exit";


cout<<"\nenter your choice in integers values ";
cin>>ch;
switch(ch){
case 1:
cout<<"1\n";
break;
case 2: cout<<"2\n";
break;
case 3: cout<<"3\n";
break;
case 4: cout<<"4\n";
break;
case 5: cout<<"5\n";
break;
case 6: cout<<"6\n";
break;
case 7: cout<<"7\n";
break;
case 0:cout<<"\n";
exit(1);
break;
default: cout<<"inavlid choice ,enter your choice again\n";
}

}
while(!ch==0);



getch();
return 0;
}
 void:: food{
cout<<"Food & Drink			On-site coffee house\n";
cout<<"Chocolate/cookies(Add char)	Fruits Additional charge\n";
cout<<"Bottle of water			Special diet menus (on request)\n";
cout<<"Restaurant			Good coffee!\n";

}

 void:: facilities(){
cout<<"General				Facilities for disabled guests";
cout<<"Parking(free)			Entertainment and family services(E)\n";
cout<<"Reception services(E)		Internet (free)\n";
cout<<"Transport(add. char)		Cleaning services(E)\n";
cout<<"Business facilities(add. char)	Wellness facilities(add. char)\n";
cout<<"Services & Extras(add. char)	Activities(E)\n";

cout<<"Most popular facilities\n";
cout<<"Free WiFi  		Free parking  	Airport shuttle\n";
cout<<"Non-smoking rooms  	Fitness centre  Swimming pool\n";
}


