#include<iostream>
using namespace std;
int main(){
    int n,mid,i;
    int target=100;
    cout<<"enter the number of elements in array:";
    cin>>n;
    int A[n];
    cout<<"enter the arrray elements:";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]>A[j]){
                swap(A[i],A[j]);
            }           
        }
    }
    cout<<"sorted array is:";
    for(int i=0;i<n;i++){
        cout<<A[i]<<"\t";
    }
    int low=0 ,high=n-1;
    while(low<=high){
        mid=low+(high-low)/2;
        if(A[mid]==target){
        cout<<"\n"<<target<<"found at index:"<<mid<<endl;
        break;
            
        }else if(A[mid]<target){
              low=mid+1;
        }else if(A[mid]>target){
              high=mid-1;
        }
        }
        if(low>high){
            cout<<target<<"not found in array"<<endl;
        }
        
      
    return 0;
}
