#include <stdio.h>
#include <stdlib.h>
//Head recursion function works at returning time
//we can exploit this feature to write easy code
//recursion uses stack so it do work at returning
//time while before stack activation record deleted
int fun(int x){
    if(x>0){
        fun(x-1);
        printf("%d\n",x);
    }
}

int main()
{
    fun(5);
    return 0;
}
