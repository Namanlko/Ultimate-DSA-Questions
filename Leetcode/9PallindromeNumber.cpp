// Leetcode Question 9: Write a program to check if the given number is pallindrome or not.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans = 0,num=n;
    while(n>0){
        int digit = n%10;

        if(ans>INT16_MAX/10){
            cout<<"Overflow Error!"<<endl;
        }

        ans = ans*10 + digit;
        n = n/10;
    }

    if(ans==num){
        cout<<"Pallindrome Number :)"<<endl;
    }
    else{
        cout<<"Not a Pallindrome Number :("<<endl;
    }
    return 0;
}