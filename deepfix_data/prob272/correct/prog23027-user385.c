#include <stdio.h>
int main(){
    int a1,a2,n,i,j,l;
    i=a1;
    j=a2;
    l=1;
    scanf("%d %d %d",&a1,&a2,&n);
    while(l<=n){
    i=j;
    j=j+i-2;
        printf("%d ",j);
        l=l+1; }
    return 0; }