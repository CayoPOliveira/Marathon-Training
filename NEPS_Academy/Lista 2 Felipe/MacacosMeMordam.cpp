#include<iostream>
#include<algorithm>
#include <vector>

using namespace std;

int main(){
    int pulos=0, i=0, j, intmaior;
    double maior=0.0;
    int N;
    cin>>N;
    vector< pair<int, int> > vet;
    pair<int, int> temp;
    int k=N;
    while(k--){
        cin>>temp.first>>temp.second;
        vet.push_back(temp);
    }
    sort(vet.begin(), vet.end());
    double tan;
    while(i<N){

        maior=0.0;
        j=i+1;
        intmaior=j;
        while(j<N){
            tan = ((double)(vet[j].second-vet[i].second))/(vet[j].first-vet[i].first);
            if(maior<tan){
                maior=tan;
                intmaior=j;
            }
            j++;
        }
        cout<<i;
        i=intmaior;
        pulos++;
    }
    cout<<pulos;

}
