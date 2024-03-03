#include <stdio.h>
int main(){
    int a[400],d[400];
    int n,i,j,k,l;int c1=0,c2=0;
    scanf("%d\n",&n);
    for(i=0;i<2*n;i++)
        scanf("%d",&a[i]);
    for(j=0;j<n-1;j++) {
        c1=0;
        for(k=j+1;k<2*n;k++) {
            c1++;
            if(a[j]==a[k]) {
                d[j]=c1;
                c2++;
                break; } } }
    int min=d[0];
    for(l=1;l<c2;l++) {
        if(d[l]<min)
        min=d[l]; }
    printf("%d",min);
    return 0; }