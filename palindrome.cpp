#include <iostream>

int main(void){

    return 0;
}
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);
        std::string check = "";
        bool palindrome = false;
        for(int i = 0; i < s.length(); i++){
            check += s[(s.length() - 1) - i];
        }

        if(check == s){
            palindrome = true;
        }
        else{
            palindrome = false;
        }
        return palindrome;
    }
    
