#include<stdio.h>
int max  (int a,int b) {
    if(a>b)
     return a;
    else
     return b; }
int main() {
    int n,a[20],b[20],ans,i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(j=0;j<n;j++) {
        b[j]=1;
        temp=j;
        for(i=j;i<n;i++) {
            if(a[temp+i]>a[temp]) {
                b[j]++;
                a[temp]=a[temp+i]; } } }
    ans=b[0];
    for(i=0;i<n;i++) {
     ans=max(ans,b[i+1]); }
    printf("%d",ans);
    return 0; }