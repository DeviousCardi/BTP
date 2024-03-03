#include <stdio.h>
int main(){
    int n,j,k=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int x[2*n];
    for(int i=0;i<n;i++) {
        if(a[i]==0) {
            k=i;
            break; } }
    x[0]=a[k];
    for(j=0;j<(2*n);j++) {
        x[j+1]=a[x[j]];
        printf("%d",x[j]); }
    return 0; }