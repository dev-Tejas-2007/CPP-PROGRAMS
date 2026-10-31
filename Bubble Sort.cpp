#include<iostream>
using namespace std;
int main(){
    int n,temp,i,j;
    cout<<"enter the size of array:";
    cin>>n;
    int A[n];
    cout<<"\nenter the elements in array:";
    for(i=0;i<n;i++){
        cin>>A[i];     
    }
    cout<<"\nthe elements are:\t";
    for(i=0;i<n;i++){
        cout<<A[i]<<"\t";
    }
    cout<<"\n the sorting array elements:";
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(A[i]>A[j]){
                swap(A[i],A[j]);
            }
        }
    } 
    cout<<"\n the sorted array/list elements are"<<endl;
    for(i=0;i<n;i++){
        cout<<A[i]<<"\t"<<endl;
    }
    return 0; 
}

