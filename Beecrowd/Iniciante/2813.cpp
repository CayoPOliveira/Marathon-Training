#include <iostream>

using namespace std;

int main()
{
    int A, GC=0, GT=0, AC=0, AT=0;
    string Ino, Vino;
    cin>>A;
    for(int i=0; i<A; i++){
        cin>>Ino>>Vino;
        if(Ino[0]=='c'){
            if(AC==0){
                GC++;
                AC++;
            }
            AT++;
            AC--;
        }
        if(Vino[0]=='c'){
            if(AT==0){
                GT++;
                AT++;
            }
            AC++;
            AT--;
        }
    }
    cout<<GC<<" "<<GT<<endl;
}
