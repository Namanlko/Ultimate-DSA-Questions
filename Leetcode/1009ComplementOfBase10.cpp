// Leetcode Question 1009: Write a program to print the compliment of a base 10 integer.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans=0,mul=1;
    
    if(n==0){
        cout<<1<<endl;
    }

    while(n>0){
        int rem = n%2;
        rem = rem^1;
        ans = ans + rem*mul;
        n = n/2;
        mul = mul*2;
    }

    cout<<ans<<endl;

    return 0;
}