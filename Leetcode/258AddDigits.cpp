// Leetcode Question 258: Write a program to add digits of a number until it reach a single digit.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    while(n>9){
        int ans=0;
        while(n>0){
            int digit = n%10;
            ans = ans + digit;
            n = n/10;
        }
        n = ans;
    }

    cout<<"Result is "<<n;

    return 0;
}
