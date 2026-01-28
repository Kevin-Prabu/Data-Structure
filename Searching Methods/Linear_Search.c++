#include <iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,30};
    int key = 302;
    bool found = false;

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
