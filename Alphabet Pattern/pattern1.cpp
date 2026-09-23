#include <iostream>
using namespace std;

void pattern1(int rows){
    for (int i = 0 ; i < rows; i++)               
    {                                            
        for (char ch = 'A'; ch <= 'A' + i; ch++) 
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
    pattern1(rows);
    return 0;
}
// Pattern :-
//  A
//  AB
//  ABC
//  ABCD
//  ABCDE
