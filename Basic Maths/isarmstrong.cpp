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

void isArmstrong(int n, int digits) {
    int reserve = abs(n); 
    int temp = abs(n);
    int sumofpowers = 0;
    
    while (temp > 0) {
        int dig = temp % 10;
        temp = temp / 10;
        sumofpowers += round(pow(dig, digits));
    }
    
    if (reserve == sumofpowers) {
        cout << "Given number is an Armstrong Number";
    } else {
        cout << "Given number is not an Armstrong Number";
    }
}

int main() {
    int n;
    cin >> n;
    int digits = countDigits(n);
    isArmstrong(n, digits);
    return 0;
}