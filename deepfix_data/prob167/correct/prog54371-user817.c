#include<stdio.h>
int size,temp;
int getSum(int[]);
int main() {
        int i,size,a[20];
        scanf("%d",&size);
        for( i=0;i<size;i++) {
            scanf("%d",&a[i]); }
    temp =getSum(a);
        printf("%d",temp);
        return 0; }
    int getSum(int a[]) {
        int i,sum=0;
     for(i=0;i<size;++i) {
      sum=sum+a[i];
    temp=sum; }
    getSum(a);
    return temp; }