#include <stdio.h>
int main() {
    int a,b,i,fac=0;
    scanf("%d%d",&a,&b);
    for(i=2;i<b;i++) {
        if(b%i==0)
        fac=fac+1; }
    if(a==fac)
    printf("YES");
    else
    printf("NO");
    return 0; }