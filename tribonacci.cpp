#include <emscripten.h>
extern "C" {
// tribonacci fuinction like fibonacci but adds 3 numbers instead of 2
// the sequence is: 0,0,1,1,2,4,7,13,24,44...
EMSCRIPTEN_KEEPALIVE
int tribonacci(int n)
{
    if(n==0 || n==1) 
    return 0;
    if(n==2) 
    return 1;

    int a=0,b=0,c=1;
    int next;
    
    for(int i=3;i<=n;i++){
        next = a+b+c;
        a=b;
        b=c;
        c=next;
    }
    return c;
}
}
