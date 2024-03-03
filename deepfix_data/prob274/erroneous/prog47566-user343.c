#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    int i,j=0;
    int t,k;
    a[0]=1;
    for (i=1;i<n+1;i++) {
        scanf("%d",&a[i]); }
    i=1;
    while (a[i]=a[i+1]) {
            i=a[i]; } }
    printf("%d ",t);
    return 0; }