#include <stdio.h>
int sum1(int a[],int index,int sumA,int sumB,int size,int s) {
   if(index==size) {
       if(sumA==s||sumB==s) {
           return 1; }
       else
       return 0; }
   else
   return sum1(a,index+1,sumA+a[index],sumB,size,s)||sum1(a,index+1,sumA,sumB+a[index],size,s); }
int main() {
     int n,s;
    int i,a[31];
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(sum1(a,0,0,0,n,s)==1)
    printf("YES");
    else
    printf("NO");
return 0; }