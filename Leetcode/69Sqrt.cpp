// Leetcode Question 69: Write a program to return the square root of a number rounded down to the nearest integer.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while((long long)i*i<=n){
        i++;
    }

    cout<<"Result is "<<(i-1);
    return 0;
}