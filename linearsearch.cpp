#include<iostream.h>
#include<conio.h>

void main()
{
int i,a[50],num,size;
clrscr();
cout<<"Enter Size of array: ";
cin>>size;
cout<<"Enter element in array: \n"<<size;
for(i=0;i<size;i++)
{
cin>>a[i];
}
cout<<"Enter element for search: ";
cin>>num;
for(i=0;i<size;i++)
{
if(a[i]==num) // if element is found
{
cout<<"\n"<<"is present at"<<position <<num <<i+1;
break;
}
}
if(i==size)
{
cout<<"\n "<<"is not found"<<num;
}
getch();
  }
