#include <stdio.h>
int main() {
    int k,n;
    scanf("%d",&n);
    int r[n+1],h[100];
    for(int i=1; i<6; i++) {
        scanf("%d",&r[i]); }
    h[1]=1;
    for(int i=2,k=2; i<=n ; i++) {
        if(r[i-1]==i) {
            h[k] =r[i];
            k++; }
        else {
            h[k]= i;
            k++;
            h[k] =r[i];
            k++; } }
    int j;
    for( k=1; k<2*n; k++)
    { printf("%d  ",h[k]);
        for( j=k-1;j>0; j++) {
            if(h[k]==h[j]) break; } }
    printf("%d %d",k,k-j+1);
    return 0; }