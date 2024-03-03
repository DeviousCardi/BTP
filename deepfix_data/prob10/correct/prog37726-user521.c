#include<stdio.h>
int max(int k) {
    if(k>1) {
        return k; }
    else {
        return 1; } }
int array(int t[],int size) {
    int i,j,count=0;
    for(i=0;i<size;i++) {
        scanf("%d",&t[i]); }
    int maxtill[20],o,p;
    for(i=0;i<size;i++) {
       for(j=0;j<i;j++) {
           if(t[i]<t[j]) {
               o=maxtill[j];
               p=max(o);
               maxtill[i]=max(p); }
           else {
               maxtill[i]=1; } } }
    for(i=0;i<size;i++) {
        if(maxtill[i]>count) {
            count=maxtill[i]; } }
    return count; }
int main() {
    int n,m;
    scanf("%d",&n);
    int a[20];
    m=array(a,n);
    printf("%d",m);
     return 0; }