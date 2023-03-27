#include <iostream>
#include <queue>

using namespace std;


priority_queue<int, vector<int>, greater<int> > pq;

int main(){
    int c, n;
    cin>>c>>n;

    for(int i=0; i<c; i++){
        pq.push(0);
    }
    int cont=0;
    for(int i=0; i<n; i++){
        int k = pq.top();
        pq.pop();
        int cheg, atend;
        cin>>cheg>>atend;
        if(k<=cheg) k=cheg+atend;
        else{
            if(k>cheg+20) cont++;
            k += atend;
        }
        pq.push(k);
    }

    cout<<cont<<endl;
}
