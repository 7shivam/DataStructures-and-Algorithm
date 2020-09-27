#include <stdio.h>
//When function each other in circular manner then its called
//indirect_recursion
//Try it on paper before running it must
void funB(int n);
void funA(int n)
{
 if(n>0)
 {
 printf("%d ",n);
 funB(n-1);
 }
}
void funB(int n)
{
 if(n>1)
 {
 printf("%d ",n);
 funA(n/2);
 }
}
int main()
{
 funA(20);
 return 0;
}
