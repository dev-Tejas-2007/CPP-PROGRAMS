#include<iostream>
using namespace std;
int main(){
    int n,target[]={10,20,8};
    cout<<"enter the size of array:\n";
    cin>>n;
    int A[n],j,i;
    cout<<"\n enter the elements:";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    
    
    for( j=0;j<3;j++){
        for( i=0;i<n;i++){
            if (A[i]==target[j]){
                cout<<target[j]<<"is found at"<<i<<endl;
                break;
            }
        }
        if(i==n){
            cout<<"\n"<<target[j]<<"not found in list"<<endl;
        }
    }
   
    return 0;
    
}    
