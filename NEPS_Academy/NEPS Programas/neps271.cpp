#include <iostream>
#include <stack>

using namespace std;

int main(){
    string lin;
    int n;
    bool flag=true;
    scanf("%d\n", &n);
    while(n--){
        cin>>lin;
        flag=true;
        stack<char> pilha;
        for(int i=0; i<lin.size(); i++){
            if(lin[i]=='{' or lin[i]=='(' or lin[i]=='['){
                pilha.push(lin[i]);
            }
            else if(lin[i]=='}' or lin[i]==')' or lin[i]==']'){
                if(pilha.empty()){
                    flag=false;
                    break;
                }
                else if(lin[i]-1==pilha.top() or lin[i]-2==pilha.top())
                {
                    pilha.pop();
                }
                else flag=false;

            }
        }
        if(!pilha.empty())
        {
            flag=false;
        }
        if(flag) cout<<"S"<<endl;
        else cout<<"N"<<endl;
    }
}


