#include <stdio.h>
int sum(int a[],int index,int sumA,int sumB,int size) {
    if(index==size) {
        if(sumA==sumB)
        return 1;
        else
        return 0; }
    else
    return sum(a,index+1,sumA+a[index],sumB,size)||sum(a,index+1,sumA,sumB+a[index],size); }
int main() {
   int n,i,a[31];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   if(sum(a,0,0,0,n)==1)
   printf("YES");
   else
   printf("NO");
    return 0; }