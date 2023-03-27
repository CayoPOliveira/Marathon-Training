#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

int main(){
    int n, d;
    while(1){
        scanf("%d%d\n", &n, &d);
        if(!n and !d) break;

        stack<char> pil;
        int cont=0;
        string str;
        cin>>str;

        for(int i=0; i<n; i++){
            if(i==0){
                pil.push(str[0]);
                i++;
            }
            while(1){
                if(!pil.empty())
                    if(pil.top()<=str[i] and cont!=d){
                        pil.pop();
                        cont++;
                    }
                    else break;
                else break;
            }
            pil.push(str[i]);
        }

        stack<char> resp;
        while(!pil.empty()){
            resp.push(pil.top());
            pil.pop();
        }
        while(!resp.empty()){
            cout<<resp.top();
            resp.pop();
        }
        cout<<endl;

    }
}
