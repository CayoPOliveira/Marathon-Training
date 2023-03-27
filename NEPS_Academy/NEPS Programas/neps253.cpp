
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, T;
    cin>>N>>T;
    vector< pair<int, string> > time;
    vector< pair<int, string> > jog;
    pair<int, string> temp_jog;
    for(int i=0; i<N; i++){
        cin>>temp_jog.second>>temp_jog.first;
        jog.push_back(temp_jog);
    }
    sort(jog.begin(), jog.end());
    int k=1;
    for(int i=jog.size()-1; i>=0; i--){
        if(k>T) k=1;
        temp_jog.first = k;
        k++;
        temp_jog.second = jog[i].second;
        time.push_back(temp_jog);
    }
    sort(time.begin(), time.end());

    int Time=0;
    for(int i=0; i<time.size(); i++){
        if(Time<time[i].first){
            Time++;
            if(Time!=1) cout<<endl;
            cout<<"Time "<<Time<<endl;
        }
        cout<<time[i].second<<endl;
    }

}
