
class Solution {
public:
    bool isPalindrome(string s) {
        string cleanInput = "";

        //to clean the input string - removing non-alphanumeric characters and converting to lowercase
        for(char c: s){
            if(alphaNumeric(c))
            cleanInput+=tolower(c);
        }
        int start=0, end = cleanInput.size()-1;

        while(start<=end){
            if(cleanInput[start++] != cleanInput[end--])
            return false;
        }
        return true;
    }

    //To check if a character is alphanumeric
    bool alphaNumeric(char c){
        if((c>='a' && c<='z') |
        (c>='A' && c<='Z') |
        (c>='0' && c<='9')
        ) return true;

        return false;
    }
};