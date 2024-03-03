#include <stdio.h>
int main() {
    int i,j,num,flag=0,N;
    int n,count=0;
    scanf("%d\n",&n);
    int a[n];
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i==a[j])
            count=count+1; }
        if(count==0) {
           num=i; }
        if(count==2) {
            N=i; } }
    printf("%d\n",num);
    printf("%d\n",N);
    return 0; }