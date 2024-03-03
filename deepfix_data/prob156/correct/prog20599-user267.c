#include <stdio.h>
int main() {
    int n,m,i,m1,j,s=0,k;
    scanf("%d%d",&n,&m);
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        int a[m];
        scanf("%d",&a[j]);
        k=s;
        s=s+a[j]; }
   printf("%d\n",k);
    s=0; }
    return 0; }