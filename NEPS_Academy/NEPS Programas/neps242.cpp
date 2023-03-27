#include <iostream>

using namespace std;

string title(string F){
	int x = 32;
    if(F[0]>='a' and F[0]<='z') F[0]-=x;
	for(int i=1; i<F.size(); i++)
    {
        if(F[i-1]==' ')
        {
            if(F[i]>='a' and F[i]<='z') F[i]-=x;
        }
        else
        {
           if(F[i]>='A' and F[i]<='Z') F[i]+=x;
        }
    }
    return F;
}

int main(){
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
