#include<iostream>
using namespace std;
void quicksort(int A[],int low,int high){
    if(low<high){
        int pivot=A[high];
        int i=low-1;
        for(int j=low;j<high;j++){
            if(A[j]<pivot){
                i++;
                swap(A[i],A[j]);
            }
        }
        swap(A[i+1],A[high]);
        int p= i+1;
        quicksort(A,low,p-1);
        quicksort(A,p+1,high);
        
    }
}
int main(){
    int n;
    cout<<"\n enter the number of elements in array:";
    cin>>n;
    int A[n];
    cout<<"\n enter elements:";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    quicksort(A,0,n-1);
    cout<<"sorted array is:";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
