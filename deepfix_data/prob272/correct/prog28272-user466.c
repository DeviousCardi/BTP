#include <stdio.h>
int main(){
    int n,i,a1,a2;
    scanf("%d",&n);
    int T[5];
    scanf("%d",&a1);
    scanf("%d",&a2);
    T[1]=a1;
    T[2]=a2;
    for(i=3;i<=n;i++) {
        T[i]=T[i-1]+T[i-2]-2;
        printf("%d %d\n",T[i],i); }
    return 0; }