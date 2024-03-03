#include<stdio.h>
int main() {
    int n,k,count=0,p=0;
    scanf("%d%d",&n,&k);
    int s[n],kd[k],pq[k];
    for(int i=0;i<n;i++) {
    scanf("%d",(s+i)); }
    for(int i=0;i<=k;i++) {
        count=0;
        for(int j=0;j<n;j++) {
            if(*(s+j)==i) {
                count=count+1; } }
        *(kd+i)=count;
     p=p+*(kd+i);
     *(pq+i)=p;
     printf("%d ",*(pq+i)); }
     for(int i=0;i<=k;i++) {
        for(int j=0;j<*(kd+i);j++) {
            printf("%d ",i); } }
  return 0; }