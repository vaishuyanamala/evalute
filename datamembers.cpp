#include<iostream.h>
#include<conio.h>
class worker
{
char wnm[20];
int hrs;
float sal;
public:
void getworker(float prate);
void putworker();
};
void worker::getworker(float prate=40.50)
{
cout<<"\n Enter Worker name : ";
cin>>wnm;
cout<<"\n Enter No of Hours work : ";
cin>>hrs;
sal=hrs*prate;
}
void worker::putworker()
{
cout<<"\n Worker Name = "< cout<<"\n Hours work = "< cout<<"\n------------------------";
cout<<"\n Total salary = "< }
void main()
{
worker w;
clrscr();
w.getworker();
w.putworker();
getch();
}