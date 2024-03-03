#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
if(n==0) {
 return 1; }
    return (catalan(n-1)*(2*n-1)*2)/(n+1); }
int main(){
    int i,t,k,n,c=0;
    int a[10000];
    scanf("%d",&t);
    for(n=0;n<17;n++){
          a[i]=catalan(n); }
    for(i=0;i<t;i++){
        scanf("%d\n",&k);
        for(n=0;n<17;n++) {
            if(a[n]==k)
                c++; }
        if(c!=0)
            printf("yes\n");
        else
            printf("no\n");
        c=0; }
    return 0; }