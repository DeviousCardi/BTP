#include <stdio.h>
int main() {
    int h,n,pi,pf,flag=0,i;
    scanf("%d%d%d",&h,&n,&pi);
    for(i=2;i<=n;i++) {
            scanf("%d",&pf);
            if(pf<pi)
                h=h-(pi-pf);
            if(h<=0) {
                    flag=1;
                    break; }
                pi=pf; }
    if(flag==1)
        printf("No");
    else
        printf("Yes");
    return 0; }