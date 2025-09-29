#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int actualNumber=x;
        if(x<0)
            return false;
        
        int reversedNumber = 0;

        while(x!=0){
            if(reversedNumber>INT_MAX/10 || reversedNumber<INT_MIN/10)
                return false;
            
            reversedNumber = reversedNumber*10 + x%10;
            x/=10;
        }
        return actualNumber==reversedNumber;
        
    }
};