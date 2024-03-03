#include <stdio.h>
int main() {
    int n,m;
    int i,j;
    int a[20];
    int sum=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           scanf("%d",&a[j]);
           sum=sum+a[j]; }
        printf("%d\n",sum);
        i++; }
    return 0; }