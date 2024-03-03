#include <stdio.h>
int main(){
    int i, n,f,s,d,p;
    f=0;
    s=0;
    scanf("%d",&n);
    p=2*n;
    int a[p];
    for(i=0;i<p;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<p;i++){
        if((f==0)&&(n==a[i]))
            f=i;
        if((f!=0)&&(s==0)&&(n==a[i]))
            s=i; }
    d=s-f;
    printf("%d",d);
    return 0; }