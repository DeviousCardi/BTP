#include <stdio.h>
swap(int a,int b){
    int temp ;
    temp=a;
    a=b ;
    b= temp ; }
int main() {
    int N,i,j;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<N-1;i++) {
       for(j=i+1;j<N;j++) {
           if(a[i]>a[j]) {
               swap(a[i],a[j]); } }
         printf("%d",a[i]); }
    return 0; }