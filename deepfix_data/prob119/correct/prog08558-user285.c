#include <stdio.h>
#include <stdlib.h>
int tower(int x) {
    if(x==1) {
        return 1; }
    if(x==0) {
        return 0; }
    else return 2*tower(x-1)+1; }
int main() {
    int n,array[20],i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d\n",&array[i]); }
    for(i=0;i<n;i++) {
        printf("%d\n",tower(array[i])); }
    return 0; }