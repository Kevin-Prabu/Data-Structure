#include <iostream>
using namespace std;

struct details{
    int age;
    string name;
    details* next;
};

void display(details* head){
    details* temp = head;
    while(temp!=NULL){  //make sure its while and not if
        cout<<"Their name is: "<<temp->name<<" and their age is: "<<temp->age<<endl;
        temp = temp->next;
    }
}

void searchs(details* head, int x){
    details* temp = head;
    while(temp->age == x){
        cout<<"We found the guy whose age is "<<temp->age<<"His name is: "<<temp->name<<endl;
        return;
    }
    if(temp ->age != x){
        cout<<"He doesnt exist"<<endl;
        return;
    }
}

int main(){
    int x,y;
    string z;
    details* head = NULL;
    details* temp = NULL;

    cout<<"-----This is the medical admin panel-----\n\n"<<endl;
    cout<<"How much patients info do you wish to enter: ";cin>>x;

    for(int i = 0; i < x; i++){
        cout<<"Please enter their age: ";cin>>y;
        cout<<"Please enter their name: ";cin>>z;
        details* newnode = new details{y,z,NULL};

        if(head == NULL){
            head = newnode;
            temp = head;
        }else{
            temp->next = newnode;
            temp = newnode;
        }
    }
    display(head);
    searchs(head,12);
}
