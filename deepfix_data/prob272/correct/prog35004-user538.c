#include <stdio.h>
int main(){
    int n=1,i=1,t1,t2,t3;
    scanf("%d%d%d",&t1,&t2,&t3);
    if(n>2) {
        for(i=3;i<=n;i++) {
           t3=t2+t1-2;
           t3=t2;
           t2=t1; }
        printf("%d",t3); }
    return 0; }