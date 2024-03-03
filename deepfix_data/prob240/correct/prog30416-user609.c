#include <stdio.h>
#include <stdlib.h>
int fac(int n) {
    int i,f=1;
    for(i=2;i<=n;i++)
    f*=i;
    return f; }
int catalan(int n) {
    int cat=(fac(2*n)/(fac(n+1)*fac(n)));
    return cat; }
int main() {
    int t,i,temp,cat;
    scanf("%d",&t);
    int test[20];
    for(i=0;i<t;i++)
    scanf("%d",&test[i]);
    cat=catalan(t);temp=cat;
    printf("%d",fac(t));
    return 0; }