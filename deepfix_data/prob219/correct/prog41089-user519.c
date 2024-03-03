#include <stdio.h>
#include <stdlib.h>
int main () {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    switch (a){
    case 1:  printf("sum is %d",b+c); break;
    case 2:  printf("sub is %d",b-c); break;
    case 3:  printf("mul is %d",b*c); break;
    case 4:  printf("div is %f",((float)b)/c); break;
    default: printf("you type a illegal integer");
    };
    return 0; }