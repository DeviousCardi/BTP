#include <stdio.h>
int main() {
    int m,n,i,j,s,e;
    s=0;
    e=0;
    scanf("%d %d",&n,&m);
    int a[100];
    int b[100];
    for(i=0;i<m;i++) {
        scanf("%d",&a[i]);
s=s+a[i];    }
for(j=0;j<m;j++) {
    scanf("%d",&b[j]);
    e=e+b[j]; }
if(s>e){
    printf("%d",s); }
    else{
        printf("%d",e); }
    return 0; }