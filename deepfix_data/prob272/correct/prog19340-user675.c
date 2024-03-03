#include <stdio.h>
int main(){
    int a1,a2, n, i, T[n+1];
    scanf("%d ", &a1);
    scanf("%d ", &a2);
    scanf("%d", &n);
    T[0]=0;
    T[1]=a1;
    T[2]=a2;
    for(i=3;i<=n;i++)
        T[i]=T[i-1]+T[i-2]-2;
    printf("%d", T[n]);
    return 0; }