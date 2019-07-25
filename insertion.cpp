#include <iostream>
using namespace std;

int main()
{
  int a[50],e,n,i;
    cout<<"enter the no of  element you want to enter "<<endl;
  cin>>n;
  cout<<"enter the element in array"<<endl;
  for(i=0;i<=n;i++)
  {
    cin>>a[i];
  }
cout<<"array before inserting "<<endl;
  for(int i;i<n;i++)
  {
  cout<<a[i];
  }
  cout <<"inserting the array of index 2"<<endl;
  cin>>a[2];
  cout<<"array after inserting "<<endl;
  for(int i;i<n;i++)
  {
  cout<<a[i];
  }
  
return 0;
}
