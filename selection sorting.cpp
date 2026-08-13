#include<iostream>
using namespace std;
int main()
{
  int arr[10];
  int i;
  
  cout<<"\n enter array elements";
  for(i=0;i<10;i++)
  { 
    cin>>arr[i];
  }
  cout<<"\n \n array elementes entered are:";
  
  for(i=0;i<10;i++)
  {
    
    cout<<arr[i]<<"\t";
  }
   int min=arr[0];
  for(i=0;i<10;i++)
  {
    if(arr[i]<min){
      min=arr[i];
    }
  }

cout<<"\n \nminimum elements is:\t"<<min;
int temp=0;
 for(i=0;i<9;i++)
 {
    for(int j=i+1;j<10;j++)
    { 
      if(arr[i]>arr[j])
      {

       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
      }
    }
 }
  cout<<"\n \n the sorted array is:";
  for(i=0;i<10;i++)
  {
    cout<<arr[i]<<"\t";
  }    
    
  
return 0;
}
