#include <stdio.h>
int main(){
    int n,a[400],i,j,t,min=201,dist;
    scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<2*n;i++) {
        t=a[i];
        for(j=i+1;j<2*n;j++) {
            if(t==a[j])
                dist=(j-i); }
        if(min>dist)
            min=dist; }
    printf("%d",min);
    return 0; }