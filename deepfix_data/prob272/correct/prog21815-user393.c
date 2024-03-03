#include <stdio.h>
int main() {
 int j,n,s,p,a1,a2,s1;
 scanf("%d %d %d",&a1,&a2,&n);
    p=a1;
    s=a2;
    for(j=1;j<=(n-3);j++) {
        s1=s+p-2;
        s=s1;
        p=s;
        continue; }
             printf("%d ",s1);
    return 0; }