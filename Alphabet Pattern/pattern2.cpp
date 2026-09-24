#include <iostream>
using namespace std;

void pattern2(int rows){
    for (int i = 0; i < rows; i++)                       
    {                                                    
        for (char ch = 'A'; ch < 'A' + (rows - i); ch++) 
        {                                                
            cout << ch << "-";                           
        }
        cout << endl;
    }
}


int main(){
    int rows;
    cout<<"How many rows do you want ?"<<endl;
    cin>>rows;
    pattern2(rows);
    return 0;
}

// Pattern :-
//  A-B-C-D-E-
//  A-B-C-D-
//  A-B-C-
//  A-B-
//  A-