#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int reversedNumber = 0;
        while(x!=0){
            if(reversedNumber>INT_MAX/10 || reversedNumber<INT_MIN/10)
                return 0;
            reversedNumber = reversedNumber*10 + x%10;
            x/=10;
        }
        return reversedNumber;
    }
};

int main() {
    Solution sol;
    int x;
    cout << "Enter an integer to reverse: ";
    cin >> x;
    int result = sol.reverse(x);
    cout << "Reversed integer: " << result << endl;
    return 0;
}