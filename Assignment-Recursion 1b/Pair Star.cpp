/*
Pair Star
Send Feedback
Given a string S, compute recursively a new string where identical chars that are adjacent in the original 
string are separated from each other by a "*".
Input format :
String S
Output format :
Modified string
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
hello
Sample Output 1:
hel*lo
Sample Input 2 :
aaaa
Sample Output 2 :
a*a*a*a
*************************************************************************************************************************
#include <iostream>
#include "solution.h"
using namespace std;

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}

*/
// Change in the given string itself. So no need to return or print the changed string.
#include"bits/stdc++.h"
void helper(char input[], int len){
    if (len == 0) {
        return;
    }
    if (input[0] == input[1]) {
        for (int i = len; i > 0; i--) { 
            input[i + 1] = input[i];
        }
        input[1] = '*';
        len++; 
    }
    helper(input+1, len-1); 
}


void pairStar(char input[]) {
    int length = strlen(input);
    
    helper(input, length);

}
