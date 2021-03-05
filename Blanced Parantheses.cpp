#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ch;
    stack<char>match;
    cin>>ch;
    bool isMatched = true;
    for(int i = 0; i < ch.length(); i++) {
        if(ch[i] == '(' || ch[i] == '{' || ch[i] == '[') {
                match.push(ch[i]);
        }
        else{
            if(ch.empty()) {
                isMatched = false;
                break;
            }
            else if(ch[i] == ']' && match.top() == '[') {
                match.pop();
            }
            else if(ch[i] == '}' && match.top() == '{') {
                match.pop();
            }
            else if(ch[i] == ')' && match.top() == '(') {
                match.pop();
            }
            else {
                isMatched = false;
                break;
            }
        }
    }
    if(isMatched) {
        cout<<"Parantheses balanced"<<endl;
    }
    else {
        cout<<"Parantheses don't balanced"<<endl;
    }
    return 0;
}
