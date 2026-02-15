#include <iostream>
using namespace std;


void swap(int* a, int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int pratitions(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}

void quickswap(int arr[],int low,int high){
    if(low<high){
        int pivot_value = pratitions(arr,low,high);
        quickswap(arr,low,pivot_value-1);
        quickswap(arr,pivot_value+1,high);
    }
}

void values(int arr[],int lenght){
    quickswap(arr,0,lenght-1);
}

int main(){
    int arr[] = {16,23,37,2,6}, n=5;
    values(arr,n);

    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
