#include <stdio.h>
int main(){
    int n,a[400],i,j,t,min=401,dist;
    scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<2*n;i++) {
        t=a[i];
        for(j=0;j<2*n;j++) {
            if(t==a[j])
                dist=(j-i); }
        if(min>dist&&dist>0)
            min=dist; }
    printf("%d",min);
    return 0; }