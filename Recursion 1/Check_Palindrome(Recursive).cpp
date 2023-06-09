/*
 Check Palindrome (recursive)
Send Feedback
Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :

String S

Output Format :

'true' or 'false'

Constraints :

0 <= |S| <= 1000
where |S| represents length of string S.

Sample Input 1 :

racecar

Sample Output 1:

true

Sample Input 2 :

ninja

Sample Output 2:

false

***********************************************************************************************************

#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

*/

#include"bits/stdc++.h"
using namespace std;
bool helper(char input[], int size){
    if(size == 0 || size == 1) return true; 
    if(input[0] != input[size-1]) return false;
    bool ans = helper(input+1, size-2);
    return ans;
}

bool checkPalindrome(char input[]) {
    int length = strlen(input);
    return helper(input, length);
}


