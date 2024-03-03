#include <stdio.h>
int main(){
    int a1,a2,n,i,j,l,k;
    l=2;
    scanf("%d %d %d",&a1,&a2,&n);
    j=a1;
    i=a2;
    while(l<=n){
    k=j+i-2;
    printf("%d %d %d\n", i, j, k);
    j=k;
    i=j;
    l=l+1;}
    printf("%d",i);
    return 0; }