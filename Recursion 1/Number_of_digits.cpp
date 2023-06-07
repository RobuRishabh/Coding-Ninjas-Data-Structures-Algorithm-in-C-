/*
 Number of Digits
Send Feedback
Given the number 'n', find out and return the number of digits present in a number .
Input Format :

Integer n

Output Format :

Count of digits

Constraints :

1 <= n <= 10^6

Sample Input 1 :

 156

Sample Output 1 :

3

Sample Input 2 :

 7

Sample Output 2 :

1

#include<iostream>
#include "Solution.h"
using namespace std;


int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}

*/

int count(int n){
    //base case
    if(n== 0) return 0;
    //hypotheis
    int smallOutput = count(n/10);
    //Calculation
    int Output = smallOutput + 1;
    return Output;
    
}
