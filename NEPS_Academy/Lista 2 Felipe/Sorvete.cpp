#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector< pair<int, int> > praia;
pair<int, int> temp;

void organiza(){
    for(int i=0; i<praia.size()-1; i++){
        if(praia[i].second>=praia[i+1].first)
        {
            if(praia[i].second>praia[i+1].second){
                praia.erase(praia.begin()+i+1);
                i=-1;
            }
            else{
                praia[i].second=praia[i+1].second;
                praia.erase(praia.begin()+i+1);
                i=-1;
            }
        }
    }
}

int main(){
    int P, S;
    cin>>P>>S;

    while(S--){
        cin>>temp.first>>temp.second;
        praia.push_back(temp);
    }
    sort(praia.begin(), praia.end());
    organiza();
    for(int i=0; i<praia.size(); i++){
        cout<<praia[i].first<<" "<<praia[i].second<<endl;
    }
}
