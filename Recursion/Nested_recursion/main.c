#include <stdio.h>
//Nested recursion means,when we passing recursion function parameter
//as recursive call only
int fun(int n)
{
 if(n>100)
 return n-10;
 return fun(fun(n+11));//-----------Nested recursion parameter as function call
}
int main()
{
 int r;
 r=fun(95);
 printf("%d\n",r);
 return;
}
