#include <stdio.h>
int main() {
    int n,m,i,j;
    scanf("%d%d\n",&n,&m);
    int num[m];
    int s[n];
    int sum;
    int max;
    for(i=0;i<n;i=i+1) {
        sum=0;
        for(j=1;j<m;j=j+1) {
            scanf("%d",&num[j]);
            sum=sum+num[j]; }
        s[i]=sum; }
    s[0]=max;
    if(s[i>max]&&i>0&&i<n) {
        s[i]=max;
        printf("%d",max); }
    return 0; }