#include <stdio.h>
int main(){
    int n,a[100];
    int t,k;
    int pr[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    pr[0]=1;
    for(int i=1;i<n;i++){
        pr[i]=a[pr[i-1]];
        printf("%d/t",pr[i]); }
    return 0; }