#include <iostream>
using namespace std;

int main(){
    int x, y, zero = 0, nonzero = 0;

    //First
    cout<<"Enter the row value: "; cin>>x;
    cout<<"Enter the cols value: "; cin>>y;

    int matrix [x][y];

    //inserting values
    for(int a = 0; a<x; a++){
        for(int b=0; b<y; b++){
            cin>>matrix[a][b];
        }
    }

    cout<<"The matrix value would be"<<endl;
    //displaying the values
    for(int a = 0; a<x; a++){
        for(int b=0; b<y; b++){
            cout<<matrix[a][b]<<" ";
            if(matrix[a][b] == 0){
                zero++;
                cout<<"\nThe location of 0 is "<<matrix[x][y];
            }
            else{
                nonzero++;
            }
        }
    cout << endl;
    }

    cout<<"The amount of zero numbers are: "<<zero<<endl;
    cout<<"The amount of non-zero numbers are: "<<nonzero;
}