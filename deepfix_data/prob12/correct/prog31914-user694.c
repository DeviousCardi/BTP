#include <stdio.h>
int main(){
    int a[400];
    int n,i,j,k,d;int c1=0,min=1000;
    scanf("%d\n",&n);
    for(i=0;i<2*n;i++)
        scanf("%d",&a[i]);
    for(j=0;j<2*n;j++) {
        c1=0;
        for(k=j+1;k<2*n;k++) {
            c1++;
            if(a[j]==a[k]) {
                d=c1;
                break; } }
    min=d<min?d:min; }
    printf("%d",min);
    return 0; }