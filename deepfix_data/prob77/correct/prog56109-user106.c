#include <stdio.h>
int main() {
    int i,a=0,b=0,n,num[1000],max=0,min=0;
    scanf("%d ",&n);
    for(i=2;i<=n;i++) {
        scanf("%d",&num[i]);
        if(max==num[i])
        max=i=a;
        if(min==num[i])
        min=i=b; }
    printf("end");
    return 0; }