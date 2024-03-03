#include <stdio.h>
int count(long int,int,int);
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        getchar(); }
    int uniq[n],flag1=0;
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++) {
        if(a[i]==a[j])
        flag=1;
        if(flag==0)
        uniq[i]=a[i]
        else
        unique[i]=0; }
    flag1=0;
    for(i=0;i<n;i++) {
        if(uniq[i]!=0) {
            if(uniq[i]!=count(uniq,uniq[i],n))
            flag1=1; } }
    if(flag1==0)
    printf("Yes");
    else
    printf("No"); }
int count(long int a,int b,int n) {
  int count=0,i;
  for(i=0;i<n;i++) {
      if(a[i]==b)
      count=count+1; }
  return count; }