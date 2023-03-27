#include <iostream>
using namespace std;

/**< Vestibular */
void vest(){
    int NumQuestoes, cont=0;
    string gab,resp;
    cin>>NumQuestoes>>gab>>resp;
    for(int i=0; i<gab.size(); i++)
    {
        if(gab[i]==resp[i]) cont++;
    }
    cout<<cont;

}

/**< INT MAIN */
int main(){
    vest();
    return 0;
}
