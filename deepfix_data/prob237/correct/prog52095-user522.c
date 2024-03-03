#include<stdio.h>
int count;
int arr[100];
int getInversions(int l,int r) {
    count=0;
    for(int i=0;i<l;i++)
      for(int k=i;k<i+r;k++) {
          for(int m=k+1;m<i+r;m++)
          if(arr[k]>arr[m])
          count=count+1; }
    return count; }
int main() {
    int l,r,x;
    scanf("%d\n%d",&l,&r);
    for(int i=0;i<l;i++)
    scanf("%d ",&arr[i]);
    x=getInversions(l,r);
    printf("%d",x);
    return 0; }