// Leetcode Question 231: Write a program to check if a number belongs to the power of 2 or not. Optimized Solution.

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool flag = false;

    if(n<0){
        cout<<"Invalid Input!"<<endl;
    }

    for(int i=1; i<=30; i++){
        int ans = pow(2,i);
        if(ans == n){
            flag = true;
        }
    }

    if(flag){
        cout<<"Number is Power of 2."<<endl;
    }
    else{
        cout<<"Number is not Power of 2."<<endl;
    }
    return 0;
}