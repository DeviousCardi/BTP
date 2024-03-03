#include<stdio.h>
int main() {
    int n,k,count=0;
    scanf("%d%d",&n,&k);
    int s[n],kd[k];
    for(int i=0;i<n;i++) {
    scanf("%d",(s+i)); }
    for(int i=0;i<k;i++) {
        for(int j=0,count=0;j<k;j++) {
            if(*(s+j)==i) {
                     printf("%d",count);
                count=count+1; } }
        *(kd+i)=count; }
     for(int i=0;i<k;i++)
     printf("%d",*(kd+i));
  return 0; }