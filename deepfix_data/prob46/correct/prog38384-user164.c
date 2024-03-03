#include <stdio.h>
int main() {
    int m,n,i,ntf=0;
    scanf("%d %d",&m,&n);
    for(i=2;i<n;i++) {
        if((n%i)==0)
        ntf=ntf+1; }
    if(ntf==m)
    printf("YES");
    else
    printf("NO");
    return 0; }