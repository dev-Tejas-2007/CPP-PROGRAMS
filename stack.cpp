#include<iostream>
#define max 5
using namespace std;
class stack{
    public:
    int A[max];
    int top;
    stack(){
        top=-1;
    }
    void push(int value){
        if(top==max-1|top>=max){
            cout<<"\nthe stack is aldeready full. that is overflow stack \n";
            cout<<value<<"cant be added in stack \n";
        }else{
            top++;
            A[top]=value;
            cout<<value<<" is pushed in stack\n ";
        }
    }
    void pop(){
        if(top==-1){
            cout<<"\nstack is underflow:\n ";
            
        }else{
            cout<<A[top]<<"is removed from stack \n ";
            top--;
            
        }
    }
    void display(){
        if(top==-1){
            cout<<"\nstack is empty:\n";
            
        }else{
            cout<<"\nstack contains:";
            for(int i=0;i<=top;i++){
               cout<<A[i]<<"\t"; 
               
            }
            cout<<"\n";
        }
    }
};
int main(){
    stack s1;
    s1.display();
    s1.push(25);
    s1.push(10);
    s1.push(30);
    s1.push(13);
    s1.display();
    s1.push(50);
    s1.push(70);
    s1.display();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.push(770);
    s1.display();
    return 0;
}
