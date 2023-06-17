/*
Merge Sort
Send Feedback
Given the starting 'l' and the ending 'r' positions of the array 'ARR', your task is sorting the elements 
between 'l' and 'r'.
Note:
Change in the input array itself. So no need to return or print anything.
Example:
Input: ‘N’ = 7,
'ARR' = [2, 13, 4, 1, 3, 6, 28]

Output: [1 2 3 4 6 13 28]

Explanation: After applying 'merge sort' on the input array, the output is [1 2 3 4 6 13 28].
Input format :
The first line contains an integer 'N' representing the size of the array/list.

The second line contains 'N' single space-separated integers representing the elements in the array/list.
Output format :
You don't need to return anything. In the output, you will see the array after modification is done by you.
Constraints :
1 <= N <= 10^3
0 <= ARR[i] <= 10^9
Sample Input 1:
7
2 13 4 1 3 6 28
Sample Output 1:
1 2 3 4 6 13 28
Explanation of Sample Output 1:
After applying 'merge sort' on the input array, the output is [1 2 3 4 6 13 28].
Sample Input 2:
5
9 3 6 2 0
Sample Output 2:
0 2 3 6 9
Explanation of Sample Output 2:
After applying 'merge sort' on the input array, the output is [0 2 3 6 9].
**********************************************************************************************************************
#include <bits/stdc++.h>

using namespace std;
#include "solution.h"

class Runner {
  vector<int> v;

public:
  void takeInput() {
    int n;
    cin >> n;
    v.assign(n, 0);
    for (int i = 0; i < n; ++i) {
      cin >> v[i];
    }
  }

  void execute() {
    auto c = v;
    mergeSort(c, 0, (int)c.size() - 1);
  }

  void executeAndPrintOutput() {
    auto c = v;
    mergeSort(c, 0, (int)c.size() - 1);
    for (int i = 0; i < c.size(); ++i)
      cout << c[i] << ' ';
    cout << endl;
  }
};

int main() {
  // freopen("./Testcases/large/in/input30.txt", "r", stdin);
  // freopen("./Testcases/large/out/output30.txt", "w", stdout);
  Runner runner;
  runner.takeInput();
  runner.executeAndPrintOutput();

  return 0;
}

*/

void merge(vector<int>& arr, int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> L(n1), R(n2);
    for(int i=0; i<n1; i++){
        L[i] = arr[left + i];
    }
    for(int j=0; j<n2; j++){
        R[j] = arr[mid + 1 + j];
    }
    int i=0, j=0, k =left;
    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            arr[k++] = L[i++]; 
        }
        else{
            arr[k++] = R[j++];
        }
    }
    while(i < n1){
        arr[k++] = L[i++];
    }
    while(j < n2){
        arr[k++] = R[j++];
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if(l >= r) return;
    int mid = (l+r)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    merge(arr, l, mid, r);
}