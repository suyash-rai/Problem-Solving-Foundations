#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n){
    int revnum = 0;                             //  If a number has trailing zero then the reverse will not include the zeros.
    while (n > 0)                               //  reversenumber(14200) != 00241
    {                                           //  reversenumber(14200) = 241
        int last_digit = n % 10;
        n= n / 10;
        revnum = (revnum*10)+ last_digit;
    }
    return revnum;
}

int main() {
    int n;
    cin >> n;
    cout << reverseNumber(n) << endl;
    return 0;
}

// Time Complexity: O(log₁₀ n)
// Space Complexity: O(1)
// Note :- This program is only for positive integers