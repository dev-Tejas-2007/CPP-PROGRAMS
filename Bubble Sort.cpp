#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"\n enter the number of array/list elements"<<endl;
  cin>>n;
  int A[n],i,j,temp;
  cout<<"enter the elements of array/list"<<endl;
  for(i=0;i<n;i++){
      cin>>A[i];
  }
  cout<<"the elements you entered are"<<endl;
   for(i=0;i<n;i++){
     if(A[i]!=0){
        cout<<A[i]<<",\t"<<endl;
     }else{
        cout<<"you have entered the invalid input"<<endl;
     }
   }
  //bubble sorting logic
  for(i=0;i<n;i++){
      for(j=1;j<=n;j++){
          if(A[i]<A[j]){
              temp=A[j];
              A[j]=A[i];
              A[i]=temp;
          }
      }
  }
  cout<<"the sorted array/list elements are"<<endl;
   for(i=0;i<n;i++){
        cout<<A[i]<<",\t"<<endl;
   }
return 0;
}









