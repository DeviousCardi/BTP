#include <stdio.h>
#include <stdlib.h>
int fact(int r) {
    int ans=1,i;
    for(i=0;i<r;i++)
    ans=ans*(i+1);
    return ans; }
int main() {
int b;
scanf("%d",&b);
printf("%d",fact(19));
return 0; }