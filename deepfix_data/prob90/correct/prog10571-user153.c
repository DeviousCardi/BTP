#include <stdio.h>
int main(){
    int k,n,i;
    int util;
    int occ[500];
    i=0;
    int count=0;
    for(i;i<=499;i++) {
        occ[i]=0; }
    scanf("%d",&k);
    scanf("%d",&n);
    i=0;
    for(i;i<=n-1;i++) {
        scanf("%d",&util);
        occ[util]++; }
    i=0;
    for(i;i<=k;i++) {
        if(occ[i]+occ[k-i]>=2) {
            count++;
            break; } }
    if(count==1) {
        printf("lucky"); }
    if(count==0) {
        printf("unlucky"); }
    return 0; }