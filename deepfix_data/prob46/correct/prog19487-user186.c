#include <stdio.h>
int main() {
    int a,b,i,fac=0;
    scanf("%d%d",&a,&b);
    for(i=2;i<a;i++) {
        if(a%i==0)
        fac=fac+1; }
    if(b==fac)
    printf("YES");
    else
    printf("NO");
    return 0; }