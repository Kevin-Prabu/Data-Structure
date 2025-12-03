#include <iostream> 
#include <vector> 

using namespace std; 

class stack{
    string* arr;
    int top;
    int cap;

    public:
    stack(int size){
        arr = new string [size];
        cap = size;
        top =-1;
    }
    bool isFull(){
        return top == cap - 1;
    }

    bool isEmpty(){
        return top == -1;
    }    
    void push(string x){
    if(isFull()){
        cout<<"Max"<<endl;
        return;
    }else{
        cout<<"Adding: "<<x<<endl;
        arr[++top] = x;
    }
    }
    string pop(){
        if(isEmpty()){
            cout<<"Empty"<<endl;
            return" " ;
        }else{
            return arr[top--];
        }
    }
    string peek(){
        if(isEmpty()){
            cout<<"Empty"<<endl;
            return "";
        }else{
            return arr[top];
        }
    }
    void display() {
        if (isEmpty()) {
            cout << "Empty" << endl;
            return;
        }
        cout << "Stack:\n";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
};


int main(){ 
string username, password; 
int choice;
cout<<"Welcome to the library system"<<endl; 
cout<<"If You are a new user please press 1 but if you are a return user please press 2: "; 

cin>>choice; 
if(choice == 1){ 
cout<<"Please enter your username and password"<<endl; 
cout<<"Username: "; cin>>username; 
cout<<"Password: "; cin>>password;

vector<char>pass; 
for (int i = 0; i < password.length(); i++) { 
password[i] = tolower(password[i]); 
} 
for(int i = 0; i<password.length();i++){ 
pass.push_back(password[i]); 
} 
int left = 0; 
int right = password.size() - 1; 
while (left < right) { 
if (password[left] != password[right]) { 
cout << "Password accepted"; 
return 0;
} 
left++; 
right--; 
} 
cout << "Weak password (Reasons: Its a palindrome)"; 
}else if(choice == 2){ 
cout<<"Welcome back"; 
} 

int number;
stack books(10);
do{
cout<<"\n\nPick a feature \n1.Add a book into the system  \n2.Remove the most recent book added \n3.check the most recently added book \n4.check if the recent books is empty \n5.check if the recent books is full\n6.Shows all the recent books added\nSelect: "; cin>>number;

switch(number){
    case 1:{
    cout<<"You wished to added a new book"<<endl;
    cout<<"Please enter the books name: "; string name;
    cin.ignore();
    getline(cin, name);

    books.push(name);
    cout<<"Book has been successfully added";
    break;
    }

    case 2:
    cout<<"You wished to remove the most recent book";
    books.pop();
    break;

    case 3:
    cout<<"You wished to check the most recent book";
    cout<<books.peek()<<endl;
    break;

    case 4:
    cout<<"You wished to check if the list is empty"<<endl;
    if(books.isEmpty() == true){
        cout<<"Your stack is currently empty";
    }else{
        cout<<"You stack isnt empty";
    }
    break;
    
    case 5:
    cout<<"You wished to check if the list is full"<<endl;;
        if(books.isFull() == true){
        cout<<"Your stack is Full";
    }else{
        cout<<"You stack isnt Full";
    }
    break;

    case 6:
    cout<<"You wished to check all the books recently added";
    books.display();
    break;
}
}while(number != 7);
return 0; 
} 

