#include<iostream>

using namespace std;

int main(){
    int a, b, c;
    char op, ig;
    int n;
    cin>>n;
    while(n--){
        cin>>a>>op>>b>>ig>>c;
        if(op=='+'){
            c=a+b-c;
            if(c<0) c=-1*c;
            cout<<"E";
            for(int i=0; i<c; i++){
                cout<<"r";
            }
            cout<<"ou!"<<endl;
            continue;
        }
        if(op=='-'){
            c=a-b-c;
            if(c<0) c=-1*c;
            cout<<"E";
            for(int i=0; i<c; i++){
                cout<<"r";
            }
            cout<<"ou!"<<endl;
            continue;
        }
        if(op=='x'){
            c=a*b-c;
            if(c<0) c=-1*c;
            cout<<"E";
            for(int i=0; i<c; i++){
                cout<<"r";
            }
            cout<<"ou!"<<endl;
            continue;
        }
    }

}

