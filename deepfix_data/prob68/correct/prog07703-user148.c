#include<stdio.h>
long int answer(int a[],int i,int n) {
    long int pro=1;
    if(i==n)
        return pro;
    pro=a[i]*answer(a,(i+1),n);
        return pro; }
int main() {
    int N,i;
    long int final=0;
        scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    final=answer(a,0,N);
    printf("%ld",final);
    return 0; }