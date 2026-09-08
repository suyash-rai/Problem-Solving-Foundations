#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    n = abs(n);
    if (n == 0)
        return 1;

    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << countDigits(n) << '\n';
    return 0;
}


//Alternate method for n > 0 :- int(log10(n) + 1)
// Ex:- log10(7789) + 1 = 3.891 + 1 = 4.891 = int(4.891) = 4 
// Note: log10(0) is undefined, so handle n == 0 separately.