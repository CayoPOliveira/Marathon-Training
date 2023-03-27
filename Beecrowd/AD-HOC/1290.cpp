#include <bits/stdc++.h>
using namespace std;

void ord_abc(int *a, int *b, int *c){
    if(*a > *c || *b > *c){
        if(*a > *c){
            int tmp = *a; *a = *c; *c = tmp;
        }
        if(*b > *c){
            int tmp = *b; *b = *c; *c = tmp;
        }
    }
    if(*a > *b){
        int tmp = *a; *a = *b; *b = tmp;
    }
}

long long unsigned int tuple_vol(tuple<int, int, int> tmp){
    long long unsigned int Vol = get<0>(tmp);
    Vol*=get<1>(tmp);
    Vol*=get<2>(tmp);

    return Vol;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    while(1){
        M=0;
        cin>>N;
        if(!N && !M) break;
        cin>>M;

        int a, b, c;
        cin>>a>>b>>c;

        ord_abc(&a, &b, &c);
        tuple<int, int, int> obj = make_tuple(a, b, c);

        map< tuple<int, int, int>, int > mp;
        tuple<int, int, int> tmp;

        for(int i=0; i<M; i++){
            cin>>a>>b>>c;
            ord_abc(&a, &b, &c);
            tmp = make_tuple(a, b, c);
            if(mp.find(tmp) == mp.end()) mp[tmp] = 1;
            else mp[tmp]++;
        }
        long long unsigned int Vol_dif = 99999999;
        bool exist = false;
        /*
        for(auto it = mp.begin(); it!=mp.end(); it++){
            cout<<get<0>(it->first)<<","<<get<1>(it->first)<<","<<get<2>(it->first)<<": "<<it->second<<"\n";
        }
        */
        for(auto it = mp.begin(); it!=mp.end(); it++){
            //cout<<get<0>(it->first)<<","<<get<1>(it->first)<<","<<get<2>(it->first)<<": "<<it->second<<"\n";
            if(it->second >= N){
                tmp = it->first;
                if(get<0>(tmp) >= get<0>(obj) and get<1>(tmp) >= get<1>(obj) and get<2>(tmp) >= get<2>(obj)){
                    exist = true;
                    long long unsigned int x = tuple_vol(tmp) - tuple_vol(obj);
                    if(x<Vol_dif) Vol_dif = x;
                }
            }
        }
        if(exist){
            cout<<Vol_dif<<"\n";
            //cout<<endl;
        }
        else{
            cout<<"impossible\n";
            //cout<<endl;
        }

    }

}
