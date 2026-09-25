#include <iostream>
using namespace std;

void pattern3(int rows){
    for (int i = 0; i < rows; i++){         
        char ch = 'A' + i;                       
        for (int j = 0; j <= i; j++)         
        {                                   
            cout << ch;
        }
        cout << endl;
    }
} 

int main(){
    int rows;
    cout<<"How many rows do you want ?"<<endl;
    cin>>rows;
    pattern3(rows);
    return 0;
}

// Pattern :-
//  A
//  BB
//  CCC 
//  DDDD