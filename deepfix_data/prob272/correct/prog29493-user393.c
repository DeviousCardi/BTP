#include <stdio.h>
int main() {
 int j,n,s,p,a1,a2,s1;
 scanf("%d %d %d",&a1,&a2,&n);
    p=a1;
    s=a2;
    for(j=1;j<=n;j++) {
        s1=s+p-2;
        s=s1;
        p=s;
        printf("%d ",s1);
        continue; }
    return 0; }