#include <stdio.h>
int main(){
    int a1,a2,n,i,j,l,k;
    l=2;
    scanf("%d %d %d",&a1,&a2,&n);
    j=a2;
    i=a1;
    while(l<n){ *\ for T(n)=T(n-1)+T(n-2)-2 *\
    k=j+i-2;
    i=j;
    j=k;
    l=l+1;}
    printf("%d",k);
    return 0; }