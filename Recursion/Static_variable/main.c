#include <stdio.h>
#include <stdlib.h>
//Static variables just like global variable its value
//is same every where at particular time
//we can use global value instead of static
//Static memory is stay in code section of program
//through out the program

int fun(int n){
    static int x=0;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main()
{
    int r;
 r=fun(5);
 printf("%d\n",r);

 r=fun(5);
 printf("%d\n",r);

    return 0;
}
