#include <iostream>

using namespace std;

struct ret{
    int x1,y1;
    int x2,y2;
};

bool colision(struct ret a, struct ret b){

    if(a.x1 > b.x2 || b.x1 > a.x2 || a.x2 < b.x1 || b.x2 < a.x1 || a.y1 > b.y2 || b.y1 > a.y2 || a.y2 < b.y1 || b.y2 < a.y1){
        return 0;
    }
    return 1;
}

int main(){
    struct ret a, b;

    cin>>a.x1>>a.y1>>a.x2>>a.y2;
    cin>>b.x1>>b.y1>>b.x2>>b.y2;

    if(colision(a, b)) cout<<"1"<<endl;
    else cout<<"0"<<endl;


}

