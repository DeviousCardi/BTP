#include<stdio.h>
int size,sum;
int getSum(int[]);
int main() {
        int size,a[10],sum=0;
        scanf("%d",&size);
        for(int i=0;i<size;i++) {
            scanf("%d",&a[i]); }
        sum=getSum(a);
        printf("%d",sum);
        return 0; }
    int getSum(int a[])
    {int i;
     if(i<size) {
         sum=sum+a[i];
         i++; }
    getSum(a);
    return sum; }