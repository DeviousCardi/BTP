#include<stdio.h>
#include<strings.h>
int fun(int array[],int N,int k)
{   int p;
    if(k<0)
    return 0;
    p=array[(N-k)/2];
    array[(N-k)/2]=array[(N+k-2)/2];
    array[(N+k-2)/2]=p;
    return fun(array,N,k-2); }
int main() {
    int N;
    scanf("%d\n",&N);
    int array[N];
    for(i=0;i<N;i++)
    scanf("%d",&array[i]);
    fun(array,N,N);
    for(i=0;i<N;i++)
    printf("%d",&array[i]);
    return 0; }