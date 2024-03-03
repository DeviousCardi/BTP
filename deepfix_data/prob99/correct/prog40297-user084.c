#include<stdio.h>
int sub(int b[],int size,int c) {
    int count=1,j;
    for(j=c+1;j<size;j++)
    if(b[c]<b[j])
    count++;
    return count; }
int main() {
    int n,i,a[20],max=0,k;
    max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
     scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
    k=sub(a,n,i);
    if(k>max)
    max=k; }
   printf("%d",max);
    return 0; }