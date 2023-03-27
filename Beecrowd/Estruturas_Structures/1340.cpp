#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(!cin.eof()){
        priority_queue<int> pq;
        queue<int> q;
        stack<int> s;
        int cpq=0, cq=0, cs=0, cont2=0;
        for(int i=0; i<n; i++){
            int op, x;
            cin>>op>>x;
            if(op==1){
                pq.push(x);
                q.push(x);
                s.push(x);
            }
            else{
                    cont2++;
                //if(!pq.empty())
                if( x==pq.top()){
                    cpq++;
                    pq.pop();
                }
                //if(!q.empty())
                if(x==q.front()){
                    cq++;
                    q.pop();
                }
                //if(!s.empty())
                if(x==s.top()){
                    cs++;
                    s.pop();
                }
            }
        }
        if(cpq > cq and cpq > cs and cont2==cpq) cout<<"priority queue\n";
        else if(cpq < cq  and cq > cs and cont2==cq) cout<<"queue\n";
        else if(cpq < cs and cq < cs and cont2 == cs) cout<<"stack\n";
        else if(cont2!=cq and cont2!=cpq and cont2!=cs) cout<<"impossible\n";
        else if(cpq==cs or cpq == cq or cq==cs) cout<<"not sure\n";

        cin>>n;
    }
}
