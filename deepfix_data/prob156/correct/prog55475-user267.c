#include <stdio.h>
int main() {
    int n,m,i,j,s=0,k=0,a=0;
    scanf("%d%d",&n,&m);
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        int a[m];
        scanf("%d",&a[j]);
        s=s+a[j]; }
    if(s>=k){
        a=s; }
    k=s;
    s=0; }
printf("%d",a);
    return 0; }