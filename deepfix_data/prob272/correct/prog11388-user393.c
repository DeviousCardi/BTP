#include <stdio.h>
int main() {
 int j,n,s,p,a1,a2,s1;
 scanf("%d %d %d",&a1,&a2,&n);
    if(n==1) {
        printf("%d",a1); }
    if(n==2) {
        printf("%d",a2); }
    p=a1;
    s=a2;
    for(j=1;j<=(n-2);j++) {
        s1=s+p-2;
        s=s1;
        p=s;
        j++;
        continue; }
             printf("%d ",s1);
    return 0; }