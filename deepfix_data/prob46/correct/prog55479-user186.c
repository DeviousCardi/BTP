#include <stdio.h>
int main() {
    int m,n,i,fac=0;
    scanf("%d%d",&m,&n);
    for(i=2;i<n;i++) {
        if(n%i==0)
        fac=fac+1; }
    if(m==fac)
    printf("YES");
    else
    printf("NO");
    return 0; }