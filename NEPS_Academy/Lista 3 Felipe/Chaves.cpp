#include <iostream>
#include <stack>

using namespace std;

stack<bool> pilha;

int main(){
    string lin;
    int n;
    bool flag=true;
    scanf("%d\n", &n);
    while(n--){
        getline(cin, lin);
        for(int i=0; i<lin.size(); i++){
            if(lin[i]=='{'){
                pilha.push(1);
            }
            else if(lin[i]=='}'){
                if(!pilha.empty()){
                    pilha.pop();
                }
                else{
                    flag=false;
                }
            }
        }
    }
    if(!pilha.empty()) flag=false;
    if(flag) cout<<"S"<<endl;
    else cout<<"N"<<endl;
}
