#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int n,a[200],i,j,t,min,dist=2;
    scanf("%d",&n);
    min=201;
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<2*n;i++) {
        t=a[i];
        for(j=i+1;j<2*n;j++) {
            if(a[j]==t) {
                dist=j-i; }
            if(dist<min)
                min=dist; } }
    printf("%d",min);
    return 0; }