  
#include <iostream>
using namespace std;

int main()
{
  int a[50],e,n,del,count=0,i,j;
  cout<<"enter the no of  element you want to enter "<<endl;
  cin>>n;
  cout<<"enter the element in array"<<endl;
  for(i=0;i<=n;i++)
  {
    cin>>a[i];
  }
  cout<<"enter the 1 for the inserting the element in array "<<endl;
  cout<<"enter the 2 for the deletion of the element in array "<<endl;
  cout<<"enter the choice"<<endl;
  cin>>e;
  switch(e)
  {
    case 1: //for the inserting the array

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
  break;
  case 2:

	cout<<"Enter element to be delete : ";
	cin>>del;
	for(i=0; i<n; i++)
	{
		if(a[i]==del)
		{
			for(int j=i; j<(n-1); j++)
			{
				a[j]=a[j+1];
			}
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<"Element not found..!!";
	}
	else
	{
		cout<<"Element deleted successfully..!!\n";
		cout<<"Now the new array is :\n";
		for(i=0; i<(n-1); i++)
		{
			cout<<a[i]<<" ";
		}
	}
  break;

  }

  
 return 0;
}
