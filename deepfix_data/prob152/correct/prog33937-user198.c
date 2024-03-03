#include<stdio.h>
int n,r=0,g=0;
void kd(int s[],int i,int k,int o) {
    int j,p=s[i];
    if(o%2!=0) {
        printf("no");
        return; }
    if(r==1) {
        return ; }
    if(g==1) {
        return; }
    if(i==n-1) {
        printf("no");
        g=1;
        return; }
    for(j=k;j<n;j++) {
        if(p==o/2) {
            printf("yes");
            r=1;
            return ; }
        p=p+s[j]; }
     if(k==n) {
        return; }
    printf("po");
    kd(s,i,k+1,o);
    kd(s,i+1,i+2,o); }
main() {
    int s[100],i,o=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
    scanf("%d",&s[i]);
    o=o+s[i]; }
    kd(s,0,1,o);
    return 0; }