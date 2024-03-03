#include <stdio.h>
void pro(int a[],int b[],int index,int count,int n,int k) {
    int sum=0,i;
    if(index==n) {
        printf("NO");
        return; }
    b[count]=a[index];
    for(i=0;i<=count;i++)
    sum=b[i]+sum;
    if(sum==k) {
        printf("YES");
        return; }
    return( pro(a,b,index+1,count+1,n,k)||pro(a,b,index+1,count,n,k)); }
int main() {
  int n,k,a[40];
  scanf("%d %d",&n,&k);
   pro(a,b,0,n,k);
    return 0; }