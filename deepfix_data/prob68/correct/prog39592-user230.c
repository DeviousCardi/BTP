#include<stdio.h>
int product(int a[],int size,int index) {
    if(size==index)
        return 1;
    return a[index]*product(a,size,index+1); }
int main() {
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++)
        scanf("%d",&a[i]);
    printf("%lli",product(a,N,0));
    return 0; }