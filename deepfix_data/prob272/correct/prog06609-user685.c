#include <stdio.h>
int main(){
    int i,a1,a2,n,x,y,z;
    scanf("%d %d %d",&a1,&a2,&n);
    x=a1;
    y=a2;
    for(i=3;i<=n;i++){
        z=x+y-2;
        x=y;
        y=z; }
    printf("%d",z);
    return 0; }