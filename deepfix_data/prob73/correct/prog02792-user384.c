#include <stdio.h>
int main() {
    int n,m,a,i,j;
     scanf("%d%d",&n,&m);
     int b[n];
     for(i=0;i<n;i++) {
            b[i]=0;
            for(j=1;j<=m;j++) {
                  scanf("%d",&a);
                  b[i]=b[i]+a; } }
   int max=b[0];
    for(i=0;i<n;i++) {
            if(b[i]>max)
            max=b[i]; }
printf("%d",max);
    return 0; }