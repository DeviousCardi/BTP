#include<stdio.h>
int total_steps(int);
int main() {
    int t,i;
    int k,j,count=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d",&k);
        if(k<0) {
            printf("no\n");
            continue; }
        if(k==0) {
            printf("yes\n");
            continue; }
        for(j=1;j<k/2;j++) {
            if(k==total_steps(j)) {
                count++; } }
        if(count==0) {
            printf("no\n"); }
        else {
            printf("yes\n"); } }
    return 0; }
int total_steps(int disc) {
    if(disc==1) {
        return  1; }
    return 2*total_steps(disc-1)+1; }