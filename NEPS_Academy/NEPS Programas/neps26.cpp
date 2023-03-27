#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

/**< Mapa (OBI 2017) */
void mapa(){
    int L, C, i, j;
    int a, b, c, d;
    cin>>L>>C;
    string MapaDM[L];
    for(i=0; i<L; i++){
        cin>>MapaDM[i];
        for(j=0; j<C; j++){
            if(MapaDM[i][j]=='o'){
                a=i;
                b=j;
            }
        }
    }
    c=a;
    d=b;
    while(1){
        //cout<<a<<" "<<b<<endl;
        if(a>0)
            if(MapaDM[a-1][b]=='H' and c!=a-1){
                c=a;
                d=b;
                a--;
                continue;
            }
        if(b>0)
            if(MapaDM[a][b-1]=='H' and d!=b-1){
                d=b;
                c=a;
                b--;
                continue;
            }
        if(b<C-1)
            if(MapaDM[a][b+1]=='H' and b+1!=d){
                d=b;
                c=a;
                b++;
                continue;
            }
        if(a<L-1)
            if(MapaDM[a+1][b]=='H' and c!=a+1){
                c=a;
                d=b;
                a++;
                continue;
            }
        break;
    }
    cout<<a+1<<" "<<b+1<<endl;

}

/**< INT MAIN */
int main()
{
    mapa();
    return 0;
}
