#include <stdio.h>
int main() {
    int i,n,m,str1[100],str2[100],sum1,sum2;
    sum1=0;
    sum2=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i=i+1) {
        scanf("%d",&str1[i]); }
    for(i=0;i<m;i=i+1) {
        scanf("%d",&str2[i]); }
    for(i=0;i<n;i=i+1) {
     sum1=sum1+str1[i]; }
    for(i=0;i<m;i=i+1) {
        sum2=sum2+str2[i]; }
    if(sum1>sum2) {
        printf("%d",sum1); }
    else{printf("%d",sum2);}
    return 0; }