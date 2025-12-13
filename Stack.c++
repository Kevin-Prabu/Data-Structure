#include <iostream>
using namespace std;

class stack{
    string* arr;
    int top, cap;

    public:
    stack(int x){
        arr = new string[x];
        cap = x;
        top = -1;
    }

    bool Full(){return top == cap - 1;} /*This is the total size - 1 since index start from 0 and our first value will be from 0*/
    bool Empty(){return top == -1;} /*This js means their is no value*/
    void push(string x){
        if(Full()){
            cout<<"Sorry its full"<<endl;
            return;
        }else{
            cout<<"You have entered: "<<x<<endl;
            arr[++top]=x; /*Since its void we dont need to write return arr[++top]*/
        }
    }
    string pop(){
        if(Empty()){
            cout<<"It is currently empty"<<endl;
            return" ";
        }else{
            cout<<"Done the top is erased"<<endl;
            return arr[--top];  /* Dont forget to write return */ /*This also removes the top most array */
        }
    }
    string peek(){
        if(Empty()){
            cout<<"It is currently empty"<<endl;
            return" ";
        }else{
            return arr[top]; /*Returns to current array*/
        }
    }
    void display(){
        if(Empty()){
            cout<<"It is currently empty"<<endl;
            return;
        }else{
            for(int i = top; i >= 0; i--){ /*Instead of going bottom to top we take the current value of top and go downwards giving LIFO*/
                cout<<arr[i]<<endl; 
            }
        }
    }
};

int main(){
    int number,selection;
    cout<<"Please enter how much values you want in your stack: "; cin>>number;
    stack stack(number);
    do{
    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"\nPlease select one of the following menu options to test the Stack"<<endl;
    cout<<"1.Enter a value \n2.Remove a value \n3.Look at the top most value\n4.Check the full stack\n5.To Exit\n\nPlease select: "; cin>>selection;
    switch(selection){
        case 1:{
            string words;
            cout<<"You selected to add a value"<<endl;
            cout<<"Please enter the value (only string): ";cin>>words;
            stack.push(words);
        }
        break;
        case 2:{
            stack.pop();
        }
        break;
        case 3:
            cout<<"The first value is: "<<stack.peek()<<endl;
        break;
        case 4:
            stack.display();
        break;
    }
}while(selection !=5);
cout<<"Thank you";
return 0;
}