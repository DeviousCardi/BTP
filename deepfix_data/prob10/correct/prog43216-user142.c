#include<stdio.h>
#include<string.h>
int main() {
    int n,m,i;
    scanf("%d",&n);
    scanf("%d",&m);
    int ar[n];
    int maxtill[m];
    int maxar[n];
    for(i=0;i<=(n);i++) {
        if(ar[i]<ar[i+1]) {
        printf("%d",ar[i]); }
        for(i=0;i<=(n-1);i++) {
        if(maxtill[m] > maxar[n]) {
            printf("%d",maxtill[m]); } } }
    return 0; }