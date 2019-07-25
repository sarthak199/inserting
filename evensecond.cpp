#include<iostream>
using namespace std;
int main()
{
int arr[5];
int i,count,num;
cout<<"enter the elements in an array"<<endl;
for(i=0;i<count;i++)
{
 cin>>arr[i];
}
cout<<"elements entered are:"<<endl;
for(i=0;i<count;i++)
{
  cout<<arr[i]<<endl;
}
 cout << "Enter a number to serach in Array"<<endl;
    cin >> num;

    for(i = 0; i < count; i++)
        {
        if(arr[i] == num)
            {
            cout << "Element found at index " << i<<endl;
            break;
        }
    }

      if(arr[i]!=num)
    {
        cout  << "Error| Element Not Present in Input Array"<<endl;
    }

    return 0;
}
