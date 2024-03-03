#include <stdio.h>
swap(int a,int b){
    int temp ;
    temp=a;
    a=b ;
    b= temp ; }
int main() {
    int N,i,max=0,pos ;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<N;i++) {
       if(a[i]>max) {
            max=a[i];
            pos=i ; } }
    printf("%d",pos);
    return 0; }