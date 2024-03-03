#include <stdio.h>
int main(){
    int n,a[100],sum=0,t,k;
    int i;
    scanf("%d",&n);
    if(n<=100 && n>=2) {
        for(i=0;i<n;i++) {
            scanf("%d",a[i]); }
        for(i=0;i<n;i++)
        {t= t + a[i];
          k=t/n; }
    }printf("%d",t);
    printf("%d",k);
    return 0; }