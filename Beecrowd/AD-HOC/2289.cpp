#include <iostream>

using namespace std;

int count_bits(long long unsigned int x){
  int ret = 0;
  while(x != 0){
    ++ret;
    x -= x&-x;
  }
  return ret;
}

int main(){
    while(1){
        long long unsigned int a, b;
        scanf("%llu%llu", &a, &b);
        if(!a and !b) break;
        long long unsigned int n = a^b;

        int cont = count_bits(n);
        printf("%d\n", cont);
        //cout<<cont<<endl;
    }

}
