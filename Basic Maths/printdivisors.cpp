#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n) {
    vector<int> divisors;
    
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    
    sort(divisors.begin(), divisors.end());
    
    cout << "Divisors of " << n << ": ";
    for (int d : divisors) {
        cout << d << " ";
    }
    cout << endl;
}

int main() {
    int n ;
    cin>>n;
    printDivisors(n);
    return 0;
}

// Time Complexity:  O(sqrt(N) log(sqrt(N)))
// Space Complexity: O(sqrt(N))
// Note: If sorting is not necessary for you , the time complexity drops to O(sqrt(N)).