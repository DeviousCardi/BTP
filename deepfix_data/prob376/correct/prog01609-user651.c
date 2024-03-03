#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,ret;
    if(n<=1)ret=1;
    else {
        for(i=0;i<n;i++) {
            ret=ret+(catalan(i)*catalan(n-i-1));
            return ret; } } }
int main() {
     int i,t,k,ret_v;
     scanf("%d",&t);
     for(i=1;i<=t;i++) {
         scanf("%d",&k);
         ret_v=catalan(k);
         printf("%d\n",ret_v); }
     return 0; }