#include<stdio.h>
int size;
int getSum(int[]);
int main() {
        int i,size,a[20],sum=0;
        scanf("%d",&size);
        for(int i=0;i<size;i++) {
            scanf("%d",&a[i]); }
        sum=getSum(a);
        printf("%d",sum);
        return 0; }
    int getSum(int a[])
    {int sum=0;
     if(int i<size) {
      sum=sum+a[i];
         i++; }
    getSum(a);
    return sum; }