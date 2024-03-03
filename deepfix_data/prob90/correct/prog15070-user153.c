#include <stdio.h>
int main(){
    int k,n,i;
    int util;
    int occ[1000];
    i=0;
    int count=0;
    for(i;i<=999;i++) {
        occ[i]=0; }
    scanf("%d",&k);
    scanf("%d",&n);
    i=1;
    for(i;i<=n;i++) {
        scanf("%d",&util);
        occ[util]++; }
    i=0;
    for(i;i<=k;i++)
    {   if((k-i)>=0 && (k-i)<=999) {
          if(occ[i]>=1 && occ[k-i]>=1) {
            count++;
            break; } } }
    if(count==1) {
        printf("lucky"); }
    if(count==0) {
        printf("unlucky"); }
    return 0; }