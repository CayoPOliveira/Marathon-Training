#include <iostream>
#include <deque>

using namespace std;

int main(){
    string Lin;
    cin>>Lin;
    while(!cin.eof()){
        deque<char> resp;
        deque<char>::iterator p;
        int k=0;
        bool flag=true;
        for(int i=0; i<Lin.size();i++){
            if(Lin[i]=='['){
                flag=0;
                p=resp.begin();
                continue;
            }
            if(Lin[i]==']'){
                flag=1;
                continue;
            }
            if(flag) resp.push_back(Lin[i]);
            else{
                p=resp.insert(p, Lin[i]);
                p++;
            }
        }

        while(!resp.empty()){
            cout<<resp.front();
            resp.pop_front();
        }
        cout<<endl;
        cin>>Lin;
    }
}
