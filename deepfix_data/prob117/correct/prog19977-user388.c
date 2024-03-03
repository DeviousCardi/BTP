#include<stdio.h>
int total_steps(int);
int main() {
    int t,i;
    int k,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d",&k);
        if(k>10000) {
            k=k/100; }
        if(k<0) {
            printf("no\n");
            continue; }
        if(k==0) {
            printf("yes\n");
            continue; }
        for(j=1;j<k;j++) {
            if(k==total_steps(j)) {
                printf("yes\n");
                break; } }
        if(j==k) {
            printf("no\n"); } }
    return 0; }
int total_steps(int disc) {
    if(disc==1) {
        return  1; }
    return 2*total_steps(disc-1)+1; }