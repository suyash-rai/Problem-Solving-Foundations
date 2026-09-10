#include <bits/stdc++.h>
using namespace std;

void palindrome(int n){
    if (n < 0)        cout<<"The number "<<n<<" isn't a palindrome .";
    else{
    int x = n ;
    int revnum = 0;                             
    while (n > 0) {                                                                     
        int last_digit = n % 10;
        n = n / 10;
        revnum = (revnum*10)+ last_digit;
    } 
        if (x == revnum){
            cout<<"The number is a palindrome .";
        }
        else    cout<<"The number isn't a palindrome .";
   }
}

int main() {
    int n;
    cin >> n;
    palindrome(n) ;
    return 0;
}
// Time Complexity:- O(log n)
// Space Complexity:- O(1)