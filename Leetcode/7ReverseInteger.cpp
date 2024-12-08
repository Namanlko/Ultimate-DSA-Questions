// Leetcode Question 7: Write a program to reverse an integer number.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int ans = 0;
    while(n!=0){
        int digit = n%10;

        if(ans>INT16_MAX || (ans>INT16_MAX && digit>7)){
            cout<<"Overflow Error!"<<endl;
        }

        if(ans<INT16_MIN || (ans<INT16_MIN && digit<-8)){
            cout<<"Overflow Error!"<<endl;
        }

        ans = ans*10 + digit;
        n = n/10;
    }

    cout<<"Result is "<<ans;

    return 0;
}