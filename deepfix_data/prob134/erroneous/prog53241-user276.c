#include <stdio.h>
#include <stdlib.h>
int b (int n,int k) {
    if (n<k) {
        return 0; }
    else if (n==0&&k==0) {
        return 1; }
    else if (k==0) {
        return 1; }
    else return (b(n-1,k)+b(n-1,k-1)); }
int main (){
    int n,i,j;
    scanf ("%d",&n);
    for (i=0;i<=20;i++) {
        for (j=0;j<=20;j++) {
            if (b(i,j)==n) {
                printf("%d%d",i,j);
                goto return 0; } } }
    return 0; }