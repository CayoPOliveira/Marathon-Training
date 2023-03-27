#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main(){
    int in;
    cin>>in;
    while(in--){
        int p, l;
        cin>>p>>l;
        map<string, string> m;
        for(int i=0; i<p; i++){
            string jap, port;
            cin>>jap;
            cin.ignore();
            getline(cin, port);
            m.insert(make_pair(jap,port));
        }

        for(int i=0; i<l; i++){
            string lin;
            getline(cin, lin);

            stringstream sstr;
            sstr << lin;

            int flag=0;
            while(sstr>>lin){
                if(flag) cout<<" ";
                flag++;

                auto it = m.find(lin);
                if(it==m.end()) cout<<lin;
                else cout<<it->second;
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
