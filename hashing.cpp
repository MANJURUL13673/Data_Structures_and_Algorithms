#include<bits/stdc++.h>
using namespace std;

int main()
{
    int numbers[5] = {2, 4, 3, 7, 1};
    //get the maximum value
    //let maximum value is -1
    int max = -1;
    for(int i = 0; i < 5; i++) {
        if(max < numbers[i]) { //maximum value < numbers[i] then numbers[i] is the maximum value
            max = numbers[i];
        }
    }

    //create the helping array with size max+1
    bool existValue[max+1];
    //initialize all the value to false
    memset(existValue, false, sizeof(existValue));

    //make true to the index according to number
    for(int i = 0; i < 5; i++) {
        existValue[numbers[i]] = true;
    }

    //let's search the value
    //for 6
    if(existValue[6] == true) {
        cout<<"The value 6 is exist"<<endl;
    }
    else {
        cout<<"The value 6 is not exist"<<endl;
    }
    //for 2
    if(existValue[2] == true) {
        cout<<"The value 2 is exist"<<endl;
    }
    else {
        cout<<"The value 2 is not exist"<<endl;
    }
    return 0;
}
