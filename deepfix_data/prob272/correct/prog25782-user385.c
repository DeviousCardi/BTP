#include <stdio.h>
int main(){
    int a1,a2,n,i,j,l;
    l=1;
    scanf("%d %d %d",&a1,&a2,&n);
    j=a1;
    i=a2;
    while(l<=n-1){
    j=j+i-2;
    j=i;
        l=l+1;
 printf("%d",j);}
    return 0; }