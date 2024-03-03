#include<stdio.h>
int max(int a[],int num,int i) {
    int k;
    int flag=0;
    int p;
    p=a[i];
    for(k=i+1;k<num;k++) {
        if(a[k]>p) {
            p=a[k];
            flag++; } }
    return flag; }
int max2(int a[],int num) {
        int g;
        int m;
        m=a[0];
        for(g=1;g<num;g++) {
            if(a[g]>m) {
                m=a[g]; } }
        return m; }
int main() {
    int n;
    scanf("%d",&n);
    int i;
    int a[20];
    for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
    int MaxTill[n];
    for(i=0;i<n;i++) {
        MaxTill[i]=max(a,n,i); }
    int lascend=max2(MaxTill,n);
    printf("%d",lascend);
    return 0; }