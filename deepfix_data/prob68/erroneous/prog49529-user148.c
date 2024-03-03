#include<stdio.h>
long int answer=1;
long int answer(int a[],int i,int n) {
    static int i=0;
    if(i==n-1)
        return answer;
    answer=a[i]*answer(a[],i+1,n);
        return answer; }
int main() {
    int N,i;
    long int final=1;
        scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    final=answer(a,0,N);
    printf("%ld",final);
    return 0; }