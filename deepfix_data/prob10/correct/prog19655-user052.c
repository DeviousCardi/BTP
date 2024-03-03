#include<stdio.h>
int main() {
    int n,a[20],b[20],ans,i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(j=0;j<n;j++) {
        temp=j;
        for(i=j;i<n;i++) {
            if(a[temp+i]>a[temp]) {
                b[j]++;
                a[temp]=a[temp+i]; } } }
    ans=b[0];
    for(i=1;i<n;i++) {
     if(b[i]>ans)
      ans=b[i]; }
    return 0; }