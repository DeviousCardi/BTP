#include <stdio.h>
int main(){
    int n,i,a1,a2;
    scanf("%d",&n);
    int T[n];
    scanf("%d",&a1);
    scanf("%d",&a2);
    for(i=3;i<=n;i++) {
        T[n]=T[n-1]+T[n-2]-2; }
    printf("%d",T[n]);
    return 0; }