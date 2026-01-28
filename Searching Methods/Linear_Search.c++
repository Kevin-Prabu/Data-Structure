#include <iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,30}; //The total array 
    int key = 302; //Can be edit to change the key value
    bool found = false;

    //Main logic for Linear Search
    for(int i = 0; i<5; i++){
        if(arr[i] == key){
            cout<<"The value is found in: "<<i<<endl;
            found = true;
        }
    }

    if(!found){
        cout<<"You havent found the value";
    }
}

