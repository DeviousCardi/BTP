#include <stdio.h>
int main(){
    int n,i,j,a[100],count=0,t[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    t[0]=1;
    for(i=1;i<n;i=a[t[i]-1]){
    t[i]=a[t[i-1]-1];
    count++;
    for(j=0;j<i;j++)
    if(t[i]==t[j])
    break; }
    printf("%d %d",i,count);
    return 0; }