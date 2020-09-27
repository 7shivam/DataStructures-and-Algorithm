#include <stdio.h>
#include <stdlib.h>
//Tail Recursion Function
//Tail Recursion work done at calling time itself
//No work at returning time
int fun(int x){
    if(x>0){
    printf("%d\n",x);
    fun(x-1);
    }
}

int main()
{
    fun(5);
    return 0;
}
