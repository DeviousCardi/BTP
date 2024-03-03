#include <stdio.h>
int main(){
    int n;
    int w;
    int l=3,m=1;
    int i;
    int j;
    scanf("%d\n",&n);
    int t,k;
    int a[n];
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
     for(w=1;w<=n;w++) {
         for(j=a[w];j<=n;j++)
     { m=2;
     j=a[w];
         for(i=w+1;i<=n;i++) {
            m=m+1;
            l=l+1;
            if(a[i]==j)
        {break;} }
        if(i!=n)
        break; }
     if(i!=n)
        break; }
        k=m;
        t=l;
    printf("%d %d",t,k);
    return 0; }