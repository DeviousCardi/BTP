#include <stdio.h>
int main() {
    int n,i,t;
    int amount[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",amount[i]); }
    for(i=0;i<n;i++) {
        if(amount[i]>amount[i+1]) {
            t=amount[i];
            amount[i]=amount[i+1];
            amount[i+1]=amount[i]; } }
    for(i=n-1;i<n;i--) {
        if(amount[i+1]<amount[i]) {
            t=amount[i+1];
            amount[i+1]=amount[i];
            amount[i]=t; } }
    for(i=0;i<n;i++) {
    printf("%d",amount[i]); }
    printf("end");
    return 0; }