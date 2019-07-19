#include<iostream>
using namespace std;
int main()
{
  int i,a[50],n,e,f,arr[50], del, count=0,find;
  cout<<"enter the size of the array "<<endl;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
 

  cout<<"enter the choice"<<endl;
  cin>>e;
  
  switch(e)
  {
    case 1: cout<<"array output is"<<endl;
      for(i=0;i<n;i++)
      {
        cout<<a[i];
      }
      break;
      case 2:
      cout<<"inserting  the element int which index "<<endl;
      cin>>f;
       cout <<"inserting the array of index 2"<<endl;
    cin>>a[f];
    cout<<"array after inserting "<<endl;
    for(int i;i<5;i++)
    {
      cout<<a[i];
    }
    break;
    case 3:
    	cout<<"Enter element to be delete : ";
	    cin>>del;
	for(i=0; i<n; i++)
	{
		if(arr[i]==del)
		{
			for(int j=i; j<(n-1); j++)
			{
				arr[j]=arr[j+1];
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
			cout<<arr[i]<<" ";
		}
	}
  break;
  case 4:
        cout<<"enter the number you want to find the location of the number "<<endl;
        cin>>find;
        for(i=0;i<n;i++)
        {
          if(find==a[i])
          {
            cout<<i;
          }
        }
        break;
        default:
        cout<<"wrong no entered"<<endl;
        break;


  }
  return 0;

}
