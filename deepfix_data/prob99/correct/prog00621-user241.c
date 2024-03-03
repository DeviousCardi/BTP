#include<stdio.h>
int max(int a[],int n) {
    int maxi=a[0];
    int i;
    for(i=0;i<n;i++) {
        if(maxi<a[i])
        maxi=a[i]; }
    return maxi; }
int main() {
    int n,a[1000],i,j,b[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
            scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
            int count=1,temp=0;
            b[0]=1;
            int c[1000];
            for(j=i-1;j>=0;j--) {
                    if(a[j]<a[i]) {
                        count++;
                        c[temp]=b[j]+1;
                        temp++; }
                    if(count==1) {
                        b[i]=1; } }
            if(i!=0&&count!=1) {
                    b[i]=max(c,temp); } }
        int mini=b[0];
        for(i=0;i<n;i++) {
                if(mini<b[i])
                mini=b[i]; }
        printf("%d",mini);
    return 0; }