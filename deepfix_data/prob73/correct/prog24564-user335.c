#include <stdio.h>
int main() {
    int n,m;
    int i,j,k;
    scanf("%d %d",&n,&m);
    int sum[n],row[m];
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            scanf("%d ",&row[j]); }
        sum[i]=0;
        for (k=0;k<m;k++) {
            sum[i]=sum[i]+row[k]; } }
int max=sum[0],l;
for (l=1;l<n;l++) {
    if(sum[l]>=max) {
        max=sum[l]; } }
printf("%d",max);
return 0; }