/*
Replace pi (recursive)
Send Feedback
Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
Constraints :
1 <= |S| <= 50
where |S| represents the length of string S. 
Sample Input 1 :
xpix
Sample Output :
x3.14x
Sample Input 2 :
pipi
Sample Output :
3.143.14
Sample Input 3 :
pip
Sample Output :
3.14p
Constraints:-
1<=|S|<=50

*******************************************************************************************************************

#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}

*/

// Change in the given string itself. So no need to return or print anything
#include "bits/stdc++.h"
void replacePi(char input[]) {
	int length = strlen(input);
    if (length <= 1) {
        return;
    }
	if(input[0] == 'p' && input[1] == 'i'){
        for(int i = length - 1; i >= 2; i--){
            input[i + 2] = input[i];
        }
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
    }
    replacePi(input + 1);	
}


