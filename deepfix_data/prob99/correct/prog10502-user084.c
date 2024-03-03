#include<stdio.h>
int sub(int a[],int size,int c)
{int i,b[size];
    for(i=0;i<size;i++)
    b[i]=a[i];
    int count=1,j;
    for(j=c+1;j<size;j++) {
        if(b[c]<a[j]) {
            count++;
        b[c]=a[j]; } }
    return count; }
int main() {
    int a[20],n,i,max=0,k;
    max=1;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
     scanf("%d ",&a[i]); }
    for(i=0;i<n-1;i++) {
    k=sub(a,n,i);
    if(k>max)
    max=k; }
   printf("%d",max);
    return 0; }