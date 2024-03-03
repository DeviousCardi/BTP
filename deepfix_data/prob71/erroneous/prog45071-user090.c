#include <stdio.h>
swap(int a,int b){
    temp=a;
    a=b ;
    b= temp ; }
int main() {
    int N,i,max=0 ;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<N;i++) {
        for(j=i+1,j<N;j++)
        {  if(a[i]>a[j]) {
                swap(a[i],a[j]);
                 if(N%2==0)
                 median=a[N/2] ;break;
                 else
                 median=a[(N-1)/2+(N+1)/2];break; } } }
    printf("%d",max);
    return 0; }