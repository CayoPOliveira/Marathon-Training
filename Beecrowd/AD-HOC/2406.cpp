#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        stack<char> st;
        string s;
        cin>>s;
        bool flag = true;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='[') 
                st.push(s[i]);
            else if(st.empty()){
                flag=false;
                break;
            }
            else if(s[i]==')'){
                if(st.top()=='(') 
                    st.pop();
                else{
                    flag=false;
                    break;
                }
            }
            else if(s[i]=='}'){
                if(st.top()=='{') st.pop();
                else{
                    flag=false;
                    break;
                }
            }
            else if(s[i]==']'){
                if(st.top()=='[') st.pop();
                else{
                    flag=false;
                    break;
                }
            }
        }
        if(!st.empty()) flag = false;
        flag?cout<<"S\n":cout<<"N\n";
    }
}
