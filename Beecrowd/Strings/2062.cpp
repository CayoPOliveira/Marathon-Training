#include <iostream>
//#include <sstream>
using namespace std;

int main(){
    string text;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>text;
        if(i!=0) cout<<" ";
        if(text.size()==3){
            if( (text[0]=='O' and text[1]=='B') or (text[0]=='U' and text[1]=='R'))
                cout<<text[0]<<text[1]<<"I";

            else cout<<text;
        }
        else cout<<text;
    }
    cout<<endl;
}
