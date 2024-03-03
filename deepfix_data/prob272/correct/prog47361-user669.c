#include <stdio.h>
int main(){
    int a1,a2,n,i,t;
    scanf("%d%d%d",&a1,&a2,&n);
    for(i=3 ;i<n;i++) {
        i=a2+a1-2;
        a2=i;
        a1=a2;
     i=i+1; }
    printf("%d",t);
    return 0; }