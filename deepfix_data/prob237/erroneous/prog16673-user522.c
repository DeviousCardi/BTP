#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int count=0, ;
    for(int i=0;i<=l-r;i++) {
      for(int k=i;k<i+r;k++) {
          count=0;
          for(int m=k+1;m<i+r;m++)
          if(arr[k]>arr[m])
          count=count+1; }
      A[i]=count; }
    for(int i=0;i<l-r;i++) {
        max=(A[i]>A[i+1])?A[i]:A[i+1]; }
    return max; }
int main() {
    int l,r,x;
    scanf("%d\n%d",&l,&r);
    for(int i=0;i<l;i++)
    scanf("%d ",&arr[i]);
    x=getInversions(l,r);
    printf("%d",x);
    return 0; }