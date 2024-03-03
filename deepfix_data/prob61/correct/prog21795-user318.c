#include<stdio.h>
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n],b[k];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<k+1;i++) {
       b[i]=0;
       for(int j=0;j<n;j++) {
           if(i==b[j])
           b[i]+=1; } }
    int count=0;
    for(int i=0;i<k+1;i++) {
        for(int j=0;j<b[i];j++)
        a[count+j]=i;
        count+=b[i]; }
    for(int i=0;i<n;i++)
     printf("%d ",a[i]);
    return 0; }