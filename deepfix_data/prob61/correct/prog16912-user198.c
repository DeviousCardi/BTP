#include<stdio.h>
int main() {
    int n,k,count=0;
    scanf("%d%d",&n,&k);
    int s[n],kd[k];
    for(int i=0;i<n;i++) {
    scanf("%d",(s+i)); }
    for(int i=0;i<k;i++) {
        count=0;
        for(int j=0;j<n;j++) {
            if(*(s+j)==i) {
                count=count+1; } }
        *(kd+i)=count; }
     for(int i=0;i<k;i++)
     printf("%d",*(kd+i));
  return 0; }