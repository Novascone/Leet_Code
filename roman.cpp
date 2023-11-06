#include <iostream>

int main(void){

    return 0;
}

    int romanToInt(std::string s) {
        int num = 0;
        int M = 1000;
        int D = 500;
        int C = 100;
        int L = 50;
        int X = 10;
        int V = 5;
        int I = 1;
        int temp = 0;

        for(int i = 0; i < s.length(); i ++){
            
            if (s[i] == 'M'){

                if (temp >= M){
                    num += M;
                    temp = M;
                }
                else{
                    num += (M - temp*2);
                    temp = M;
                }
                
                
            }
            if (s[i] == 'D'){
                if (temp >= D){
                    num += D;
                    temp = D;
                }
                else{
                    num += (D - temp*2);
                    temp = D;
                }
                
            }
            if (s[i] == 'C'){
                if (temp >= C){
                    num += C;
                    temp = C;
                }
                else{
                    num += (C - temp*2);
                    temp = C;
                }
                
            }
            if (s[i] == 'L'){
                if (temp >= L){
                    num += L;
                    temp = L;
                }
                else{
                    num += (L - temp*2);
                    temp = L;
                }
                
            }
            if (s[i] == 'X'){
                if (temp >= X){
                    num += X;
                    temp = X;
                }
                else{
                    num += (X - temp*2);
                    temp = X;
                }
                
            }
            if (s[i] == 'V'){
                if (temp >= V){
                    num += V;
                    temp = V;
                }
                else{
                    num += (V - temp*2);
                    temp = V;
                }
                
            }
            if (s[i] == 'I'){
                if (temp >= I){
                    num += I;
                    temp = I;
                }
                else{
                    num += (I - temp*2);
                    temp = I;
                }
                
            }
        }

    return num;
    }