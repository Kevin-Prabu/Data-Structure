#include <iostream>
using namespace std;

int main(){
    int arr[]={3,6,9,2,5,8,1,4,7}, n=9;

    for(int i=0;i<n-1;i++){ 
        int min = i;

        for(int j = i+1; j<n;j++){    
            if(arr[j]<arr[min]){       
                min = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
