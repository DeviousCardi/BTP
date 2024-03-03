#include<stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int sum;
    scanf("%d",&sum);
    int l[n];
    int max=0;
    for(int i=0;i<n;i=i+1) {
        l[i]=0;
        for(int j=0;j<m;j=j+1) {
            sum=sum+l[i];
            scanf("%d",&sum);
            l[i]=sum; }
        return l[i]; }
    for(int i=0;i<n;i=i+1) {
      if(l[i]>l[i+1]) {
            l[i+1]=l[i];
            return l[i+1]; }
        else{
          return l[i+1]; }
        max=l[i+1]; }
        printf("%d",max);
        return 0; }