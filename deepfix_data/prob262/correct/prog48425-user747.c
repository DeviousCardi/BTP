#include<stdio.h>
#include<strings.h>
long int reverse(long int N,long int a[]){
  if(N==0)
  return 0;
  printf("%ld ",a[N-1]);
  return reverse(N-1,a);}
int main() {
  long int N=0,i;
    scanf("%ld \n",&N);
    long int a[N];
    for(i=0;i<N;i++){
        scanf("%ld ",&a[i]); }
    reverse(N,a);
    return 0; }