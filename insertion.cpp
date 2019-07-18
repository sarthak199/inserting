#include <iostream>
using namespace std;

int main()
{
  int a[5]={1,2,3,4,5};
   cout<<"array before inserting "<<endl;
    for(int i;i<5;i++)
{
  cout<<a[i];
}
  cout <<"inserting the array of index 2"<<endl;
  cin>>a[2];
  cout<<"array after inserting "<<endl;
  for(int i;i<5;i++)
{
  cout<<a[i];
}
  
return 0;
}
