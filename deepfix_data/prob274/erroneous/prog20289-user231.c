#include <stdio.h>
int main(){
    int x,y=2,z,b,c=,d,i;
    scanf("%d",&x);
    int a[x];
    for(i=0;i<x;i++){
        scanf("%d",&a[i]); }
    int r[2*x];
    r[0]=1;
    r[1]=a[0];
    z=a[1];
    do{
        r[y]=a[z];
        z=r[y];
        y++; }
    while(z!=a[1]);
    return 0; }