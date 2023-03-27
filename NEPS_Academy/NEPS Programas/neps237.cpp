#include <iostream>
#include <deque>

using namespace std;

deque <int> dq;
int main(){
    int n;
    cin>>n;
    int x;
    long long int tera, terb;
    tera=terb=0;
    while(n--){
        cin>>x;
        dq.push_back(x);
    }
    int i=0;
    while(!dq.empty()){
        if(tera==terb){
            tera+=dq.front();
            i++;
            terb+=dq.back();
            dq.pop_front();
            dq.pop_back();
        }
        else if(tera<terb){
                tera+=dq.front();
                dq.pop_front();
                i++;
            }
        else{
            terb+=dq.back();
            dq.pop_back();
        }
    }
    cout<<i<<endl;
}


