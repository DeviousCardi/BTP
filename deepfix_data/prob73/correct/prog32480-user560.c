#include <stdio.h>
int main() {
    int n,m,i,j;
    scanf("%d%d\n",&n,&m);
    int num;
    int s[n];
    int sum;
    int max;
    for(i=0;i<n;i=i+1) {
        sum=0;
        for(j=0;j<m;j=j+1) {
            scanf("%d",&num);
            sum=sum+num; }
        s[i]=sum; }
    max=s[0];
    for(i=1;i<n;i=i+1) {
        if(s[i]>max) {
          max=s[i] ; } }
   printf("%d",max);
    return 0; }