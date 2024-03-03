#include <stdio.h>
int main() {
    int a1,a2,n;
    scanf("%d %d %d",&a1,&a2,&n);
    if(n==1)
    printf("%d",a1);
    if(n==2)
    printf("%d",a2);
    if(n>2){
        int t1=a2,t2=a1+a2-2;
        for(int i=4;i<=n;i++) {
            t2 = t2 + t1 -2;
            t1 = t2 - t1 +2; }
        printf("%d\n",t2); }
    return 0; }