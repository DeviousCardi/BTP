#include <stdio.h>
int main(){
    int a1,a2, n, i;
    scanf("%d ", &a1);
    scanf("%d ", &a2);
    scanf("%d", &n);
    int T1, T2, Tn;
    T1=a1;
    T2=a2;
    for(i=3;i<=n;i++){
        Tn=T1+T2-2;
        T1=T2;
        T2=Tn; }
    printf("%d", Tn);
    return 0; }