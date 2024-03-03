#include <stdio.h>
#include<math.h>
int main(){
    int n,a[200],i,j,t;
    scanf("%d",&n);
    min=201;
    for(i=0;i<2n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<2n;i++) {
        t=a[i];
        for(j=0;j!=i;j++) {
            if(a[j]==t) {
                dist=abs(i-j); }
            if(dist<min)
                min=dist; } }
    printf("%d",min);
    return 0; }