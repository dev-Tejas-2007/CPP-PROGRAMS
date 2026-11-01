#include<iostream>
using namespace std;
int main(){
    int n,temp=0;
    int min,i,j;
    cout<<"enter the number of elements in array:";
    cin>>n;
    int A[n];
    cout<<"enter the elements in array:";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"\nArray elements are:";
    for(int i=0;i<n;i++){
        cout<<A[i]<<"\t";
    }
    min=A[0];
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[min]){
                min=j;
            }
        }
    temp=A[i];
    A[i]=A[min];
    A[min]=temp;
    }
    cout<<"\nthe sorted array is:";
    for(int i=0;i<n;i++){
        cout<<A[i]<<"\t";
    }
    return 0;
}
