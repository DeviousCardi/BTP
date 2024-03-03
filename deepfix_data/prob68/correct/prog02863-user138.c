#include<stdio.h>
int pro(int N) {
    int i,product,c=1;
    scanf("%d\n",&N);
    int a[N];
    for(i=1;i<=N;i++) {
        scanf("%d",&a[i]);
        product=c*a[i];
        c=product; }
    return c; }
int product(int N) {
    if(N==1)
    return N;
    else return pro(N-1)*N; }
int main() {
   int res,N;
   res=product(N);
   printf("%d",res);
   return 0; }