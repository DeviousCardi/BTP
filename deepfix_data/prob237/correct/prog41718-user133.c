#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int s=0;
    for(int j=l;j<=l+r-1;j++) {
        for(int m=j+1;m<=l+r-1;m++) {
            if(arr[j]>arr[m])
            s++; } }
    return(s); }
int main() {
    int n,k;
    int s1=0,s2=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(int i=0;i<=n-k;i++) {
        s1=getInversions(i,k);
        if(s1>s2)
        s2=s1; }
    printf("%d",s2);
    return 0; }