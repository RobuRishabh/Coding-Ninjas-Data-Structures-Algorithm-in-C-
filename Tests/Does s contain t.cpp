/*
Does s contain t ?
Send Feedback
Given two string s and t, write a function to check if s contains all characters of t (in the same order as they 
are in string t).
Return true or false.
Do it recursively.
E.g. : s = “abchjsgsuohhdhyrikkknddg” contains all characters of t=”coding” in the same order. So function will return true.
Input Format :
Line 1 : String s
Line 2 : String t
Output Format :
true or false
Sample Input 1 :
abchjsgsuohhdhyrikkknddg
coding
Sample Output 1 :
true
Sample Input 2 :
abcde
aeb
Sample Output 2 :
false
***************************************************************************************************************************
#include<iostream>
using namespace std;
#include "solution.h"

int main()
{
	char large[10000];
	char small[10000];
	cin>>large;
	cin>>small;
	bool x=checksequenece(large , small);

	if(x)
		cout<<"true";
	else
		cout<<"false";

}
*/

#include"bits/stdc++.h"
using namespace std;

bool helper(char *large, char *small, int L1, int L2){
    // small is zero i.e., automatically present in large
    if(L2 == 0) return true;
    // large is zero i.e., can't check if s contains all values of t
    if(L1 == 0) return false; 
    if(large[L1-1] == small[L2-1]){
        return helper(large, small, L1-1, L2-1);
    }
    return helper(large, small, L1-1, L2);
}

bool checksequenece(char large[] , char*small) {
    int L1 = strlen(large), L2 = strlen(small);
    bool ans = helper(large, small, L1, L2);
    return ans;
}
