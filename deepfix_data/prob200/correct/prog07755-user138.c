#include<stdio.h>
void fn(int a[],int n) {
    int i,j,cnt,max,t;
    for(i=0;i<n;i++) {
        cnt=0;
        for(j=0;j<n;j++) {
            if(a[i]>=a[j])
            cnt++; }
        if(cnt==n) {
            max=a[i];
            t=a[0];
            a[0]=a[i];
            a[i]=t;
            fn(a+1,n-1); } } }
int  main() {
    int n,i,k;
    scanf("%d %d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    fn(a,n);
    printf("%d\n%d",a[0],a[1]);
    return 0; }