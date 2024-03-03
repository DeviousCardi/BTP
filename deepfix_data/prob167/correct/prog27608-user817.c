#include<stdio.h>
int size,sum;
int getSum(int[]);
int main() {
        int i,size,a[20];
        scanf("%d",&size);
        for( i=0;i<size;i++) {
            scanf("%d",&a[i]); }
        sum=getSum(a);
        printf("%d",sum);
        return 0; }
    int getSum(int a[])
    {int i;
     for(i=0;i<size;i++) {
      sum=sum+a[i]; }
    getSum(a);
    return sum; }