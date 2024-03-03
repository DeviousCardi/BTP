#include <stdio.h>
int main(){
    int k,n,i;
    scanf("%d",&k);
    scanf("%d",&n);
    int occ[500];
    int count=0;
    i=0;
    for(i;i<=499;i++) {
        occ[i]=0; }
    i=1;
    for(i;i<=7;i++) {
       scanf("%d",&util);
       if(util>=0 && util<=499) {
          occ[util]++; } }
    i=0;
    for(i;i<=499;i++) {
        if(k-i>=0) {
            if(occ[i]+occ[k-i]>=2) {
               count=1; } } }
    if(count==1) {
        printf("lucky"); }
    else {
        printf("unlucky"); } }