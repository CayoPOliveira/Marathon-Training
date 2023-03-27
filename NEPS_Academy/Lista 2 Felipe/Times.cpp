#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector< pair<int, string> > time;
    vector< pair<int, string> > jog;
    pair<int, string> temp;

    int N, T;
    cin>>N>>T;
    for(int i=0; i<N; i++){
        cin>>temp.second>>temp.first;
        jog.push_back(temp);
    }
    sort(jog.begin(), jog.end());

    int k=1;
    for(int i=jog.size()-1; i>=0; i--){
        if(k>T) k=1;
        temp.first = k;
        k++;
        temp.second = jog[i].second;
        time.push_back(temp);
    }
    sort(time.begin(), time.end());
    /*
    cout<<endl;
    for(int i=0; i<time.size(); i++){
        cout<<time[i].second<<" "<<time[i].first<<endl;
    }
    */
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
