#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int count=0;
    for(int i=0;i<l;i++)
       for(int k=i;k<r+1;k++)
          for(int m=k+1;m<r+1;m++) {
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