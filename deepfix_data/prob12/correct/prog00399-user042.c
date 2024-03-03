#include <stdio.h>
int main(){
    int n,a[200],i,j,t,min=201,dist=2;
    scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<2*n;i++) {
        t=a[i];
        for(j=i+1;j<2*n;j++) {
            if(t==a[j])
                printf("y"); } }
    return 0; }