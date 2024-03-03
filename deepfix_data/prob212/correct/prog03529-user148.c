#include <stdio.h>
int main(){
    int y;
    int s;
    scanf ("%d", &y);
    s=y/1000+(y%1000)/100+(y%100)/10+y%10;
    if (2016%s==0)
        printf ("2016");
    else
        printf ("%d", 2016+s-(2016%s));
    return 0; }