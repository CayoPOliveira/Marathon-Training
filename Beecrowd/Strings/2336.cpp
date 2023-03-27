#include <iostream>
#include <stack>

using namespace std;

void ppilha(stack<int> Pil){
    while(!Pil.empty()){
        cout<<Pil.top()<<" ";
        Pil.pop();
    }
}

int main(){
    string str;
    while(cin>>str){
        long long int Soma=0;
        stack<int> Pil;
        for(int i=0; i<str.size(); i++){
            Pil.push(str[i]-'A');
        }
        //ppilha(Pil);
        long long int pot=1;
        /*
        while(!Pil.empty()){
            Soma += (Pil.top() * pot);
            pot = pot * 26;
            Pil.pop();
        }
        */
        while(!Pil.empty()){
            Soma += (Pil.top() * pot) % (1000000000ull+7);
            pot = (pot * 26) % (1000000000ull+7);
            Pil.pop();
        }
        printf("%lld\n", Soma%(1000000000ull+7));
    }
}
