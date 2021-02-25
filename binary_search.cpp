#include <bits/stdc++.h>
using namespace std;

int main()
{
    //must be the array is sorted
    int arr[10] = {1, 1, 2, 5, 7, 9, 9, 100, 101, 110};
    //apply binary search to check wheather a value is exist or not
    int low = 0;    //lower index
    int high = 10 - 1;  //upper index
    int mid;
    int searchValue = 7;
    bool isExist = false;
    while(low <= high) {
        mid = low + (high - low) / 2;
        if(arr[mid] == searchValue) {
            isExist = true;
            break;
        }
        else if(arr[mid] > searchValue) {   //mid value greater than search value. so searchValue exist in lower half
            high = mid - 1;
        }
        else {              //mid value lower then search value. so search value exist in upper half
            low = mid+1;
        }
    }
    if(isExist) cout<<"Elements found!!!";
    else cout<<"Elements not found!!!";
    return 0;
}
