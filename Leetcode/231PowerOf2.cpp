// Leetcode Question 231: Write a program to check if a number belongs to the power of 2 or not.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n<0){
        cout<<"Invalid Input!"<<endl;
    }

    while(n!=1){
        if(n%2==1){
            cout<<"Not Power of 2 :("<<endl;
            break;
        }
        n=n/2;
    }
    return 0;
}