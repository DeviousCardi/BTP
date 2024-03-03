#include <stdio.h>
#include <stdlib.h>
int cat(int k) {
    if(k==0)
    return 1;
    int i=0,t=0;
    for(i=0;i<k;i++) {
        t=t+cat(i)*cat(k-i-1); }
    return t; }
int main() {
    int t,k,i=0;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&k); }
    for(i=0;i<k;i++) {
        if(cat(i)>k) {
            break;
            printf("%d",cat(i)); } }
    return 0; }