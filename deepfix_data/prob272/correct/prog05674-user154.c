#include <stdio.h>
int main() {
    int a1,a2,n,Tn,m,Tm,Tm_1,Tm_2;
    scanf("%d %d %d", &a1,&a2,&n);
    if (n==1)
         Tn=a1;
    if (n==2)
         Tn=a2;
    if (n>2) {
        Tm_1=a2;
        Tm_2=a1;
        for(m=3;m<=n;m++) {
               Tm= Tm_1 + Tm_2 -2;
               Tm_2=Tm_1;
               Tm_1=Tm; }
        Tn=Tm; }
    printf("%d", Tn);
    return 0; }