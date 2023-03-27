#include <iostream>
using namespace std;

/**< Fibonacci */
int fib(int N){
    if(N==1 or N==0) return 1;
    return fib(N-1) + fib(N-2);
}
void fibonacci(){
    int N;
    cin>>N;
    cout<<fib(N);
}

/**< INT MAIN */
int main()
{
    fibonacci();
    return 0;
}
