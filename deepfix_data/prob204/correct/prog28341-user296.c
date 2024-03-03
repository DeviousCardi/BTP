#include <stdio.h>
#include <stdlib.h>
int main() {
    int x;
    scanf("%d",&x);
    int s[100];
    s[0]=x/10000;
    s[1]=x/1000-s[0]*10;
    s[2]=x/100-s[0]*100-s[1]*10;
    s[3]=x/10-s[0]*1000-s[1]*100-s[2]*10;
    s[4]=x-s[0]*10000-s[1]*1000-s[2]*100-s[3]*10;
    if(10000*s[4]+1000*s[3]+100*s[2]+10*s[1]+s[0]==x)
    printf("Yes");
    else
    printf("No");
return 0; }