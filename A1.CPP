#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
class hotel
{
public:
char name[30],nty[20],add[50],pnum[50];
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
{
clrscr();
ob.index();
ob.input();
ob.store();
ob.view();
//ob.display();
getch();
return 0;
}