#include<stdio.h>
#include<limits.h>
int arr[100];
int getInversions(int l,int r) {
    int count[l-r+1],m;
    for(m=0;m<l-r+1;m++) {
        count[m]=0; }
    int i,j,p,q,x,sub[r],countmax=0;
    for(i=0;i<(l-r+1);i++) {
        for(j=0;j<r;j++) {
            sub[j]=arr[i+j]; }
        for(p=0;p<r;p++) {
            for(q=p+1;q<r;q++) {
                if(sub[p]>sub[q])
                count[i]=count[i]+1; } }
        if(count[i]>countmax) {
            countmax=count[i]; } }
return countmax; }
int main() {
    int n,k,i,req;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    req= getInversions(n,k);
    printf("%d",req);
    return 0; }