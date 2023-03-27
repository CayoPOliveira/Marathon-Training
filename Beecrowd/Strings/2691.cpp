#include<iostream>

using namespace std;

void printig(int a, int b){
        cout<<a<<" x "<<b<<" = "<<a*b<<endl;
}
void printdif(int a, int b, int c){
    cout<<a<<" x "<<c<<" = "<<a*c<<" && "<<b<<" x "<<c<<" = "<<b*c<<endl;
}

int main(){
    int a, b,n;
    char x;
    cin>>n;
    while(n--){
        cin>>a>>x>>b;
        if(a==b){
            for(int i=5; i<11; i++) printig(a, i);
        }
        else{
            for(int i=5; i<11; i++) printdif(a, b, i);
        }
    }
}

