#include<stdio.h>
#include<limits.h>
int max(int a[],int);
int min(int a[],int);
int main() {
  int n,m,i,j=0;
  int a[1000],b[1000];
  scanf("%d%d",&n,&m);
  for(i=0;i<m;i++) {
      for(j=0;j<n;j++) {
          scanf("%d",&a[j]); }
      b[i]=max(a,n); }
  printf("%d",min(b,m));
    return 0; }
int max(int a[],int n) {
    int max=a[0];
    for(int i=0;i<n;i++) {
        if(a[i]>max) {
            max=a[i]; } }
    return max; }
int min(int a[],int n) {
    int min=a[0];
    for(int i=0;i<n;i++) {
        if(a[i]<min) {
            min=a[i]; } }
    return min; }