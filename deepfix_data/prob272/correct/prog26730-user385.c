#include <stdio.h>
int main(){
    int a1,a2,n,i,j,l;
    l=1;
    scanf("%d %d %d",&a1,&a2,&n);
    i=a1;
    j=a2;
    while(l<=n-1){
    i=j+i-2;
    j=i;
        l=l+1; }
 printf("%d",j);
    return 0; }