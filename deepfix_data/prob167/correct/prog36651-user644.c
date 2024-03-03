#include<stdio.h>
int sum=0,N;
int main() {
    int add(int array[],int p);
    scanf("%d",&N);
    int arr[N],i;
    for(i=0;i<N;i++)scanf("%d",&arr[i]);
    printf("%d",add(&arr[0],0));
    return 0; }
int add(int array[],int p) {
    int j=p;
    if(j==N)
    return 0;
    sum+=add(&array[j],++j);
    return sum; }