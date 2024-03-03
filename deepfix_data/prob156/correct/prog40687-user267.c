#include <stdio.h>
int main() {
    int n,m,i,m1,j,s=0,k;
    scanf("%d%d",&n,&m);
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        int a[m];
        scanf("%d",&a[j]);
        s=s+a[j]; }
    k=s;
    if(s<k){
       k=s ; }
   printf("%d\n",k);
    s=0; }
 printf("%d",k);
    return 0; }