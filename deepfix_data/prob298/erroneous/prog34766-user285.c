#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0) {
        return 1; }
    else return catalan(n-1)*(2*n-1)*(2.0/n+1); }
int main() {
    int t,array[100],i,n,count=0;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
      scanf("%d\n",&array[i]); }
    for(i=0;i<t;i++) {
       for(n=0;n<17;n++) {
        if(array[i]== int(catalan(n))) {
            count=count+1;
            break; } }
    if(count==1) {
        printf("yes\n"); }
    else  printf("no\n");
    count=0; }
    return 0; }