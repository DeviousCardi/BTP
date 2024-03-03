#include <stdio.h>
int main() {
    int n,m,a,i,j,p=0;
    scanf("%d %d\n",&n,&m);
    for(j=0;j<n;j++) {
    int sum=0;
    for(i=0;i<m;i++) {
    scanf("%d ",&a);
    sum+=a; }
    if(sum>p)
    p=sum; }
    printf("%d",p);
    return 0; }