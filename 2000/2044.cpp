#include <iostream>
#include <stack>
using namespace std;
stack<char> a;
char b;
int main(){
    while(cin>>b){
        if(b=='A'&&!a.empty()){
            a.pop();
        }
        else if(b=='B'&&!a.empty()){
            a.pop();
            if(!a.empty())a.pop();
        }
        else if(b=='C'&&!a.empty()){
            while(!a.empty())a.pop();
        }
        else{
            a.push(b);
        }
    }
    while(!a.empty()){
        cout << a.top();
        a.pop();
    }
    return 0;
}
