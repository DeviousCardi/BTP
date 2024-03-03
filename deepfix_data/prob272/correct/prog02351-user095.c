#include <stdio.h>
int main() {
    int tn1,tn2,tn,a1,a2,n,i;
    scanf("%d%d%d",&a1,&a2,&n);
    tn1=a2;
    tn2=a1;
    if(n==1)
    tn=a1;
    else if(n==2)
    tn=a2;
    else {
        for(i=a1;i<=n;i++) {
            tn=tn1+tn2-2; } }
    printf("%d",tn);
    return 0; }