#include <iostream>
using namespace std;

//push pop top peek isempty isfull

class st{
    
    int *arr;
    int top=-1;
    int n=10;
    
    public:
    int start(int n){
        arr=new int[n];

    }
    void push(int x){
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"No element to pop";
            return;
        }
        else{
            top--;
        }
    }
    void peek(int x){
        if(x>(top+1)){
            cout<<"limit exceeded to peek";
            return;
        }
        else{
            cout<<"the element from top at this position is:"<<top+1-x;
        }
    }
    void is_empty(){
        if(top==-1){
            cout<<"the stack is empty";
        }
        else{
            cout<<"the stack is not empty";
        }
    }
    void Top(){
        cout<<top;
    }

};

int main(void){
    int option;
    cout<<"choose the operation\n";
    while(true){
        cout<<"press 1 if u want to push in the stack"<<endl;
        cout<<"press 2 if u want to pop from the stack"<<endl;
        cout<<"press 3 to see top in the stack"<<endl;
        cout<<"press 4 to check if full or empty"<<endl;
        cout<<"press 5 to peak"<<endl;
        cout<<"press 6 to end entry"<<endl;
    cin>>option;
    st s1;
    if(option==1){
        int insert;
        cout<<"enter the element to add";
        cin>>insert;
        s1.push(insert);
    }
    if(option==2){
        s1.pop();
    }
    if(option==3){
        s1.Top();
    }
    if(option==4){
        s1.is_empty();
    }
    if(option==5){
        int temp;
        cout<<"Enter the index to peek, Top being 1 ";
        cin>>temp;
        s1.peek(temp);
    }
    if(option==6){
        break;
    }
    }
    
return 0;
    

}