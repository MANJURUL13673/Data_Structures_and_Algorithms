#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {9, 2, 1, 4, 5, 3, 3, 3, 2, 1};
    int ma = 0;
    //get the maximum value of the array
    for(int i = 0; i < 10; i++) {
        ma = max(ma, arr[i]);
    }
    //decleare array with maximum value
    int frequencyCount[ma+1];
    memset(frequencyCount, 0, (ma+1)*4);
    //count the frequency of the arr element
    for(int i = 0; i < 10; i++) {
        frequencyCount[arr[i]]++;
    }
    //cumulative the frequency count array to get the proper index
    for(int i = 1; i <= ma; i++) {
        frequencyCount[i] = frequencyCount[i] + frequencyCount[i-1];
    }
    //set the value according to their index
    int sortedArray[10];
    for(int i = 0; i < 10; i++) {
        int pos = frequencyCount[arr[i]] - 1;
        frequencyCount[arr[i]]--;
        sortedArray[pos] = arr[i];
    }
    for(int i = 0; i < 10; i++) {
        cout<<sortedArray[i]<<" ";
    }
    cout<<endl;
    return 0;
}
