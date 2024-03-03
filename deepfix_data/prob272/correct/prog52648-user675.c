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
        Tn=a1+a2-2;
        a1=a2;
        a2=Tn; }
    printf("%d", Tn);
    return 0; }