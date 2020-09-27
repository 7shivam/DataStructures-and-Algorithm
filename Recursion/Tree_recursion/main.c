#include <stdio.h>
//When function call itself for more than one time,its
//called tree recursion
void fun(int n)
{
 if(n>0)
 {
 printf("%d ",n);
 fun(n-1);//---------------Tree recursion
 fun(n-1);//---------------Tree recursion calling more than one time
 }
}
int main() {
 fun(3);
 return 0;
}
