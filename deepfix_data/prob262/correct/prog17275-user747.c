#include<stdio.h>
#include<strings.h>
long int reverse(int N,int a[]){
  if(N==0)
  return 0;
  printf("%d ",a[N-1]);
  return reverse(N-1,a);}
int main() {
  long int N=0,a[1000000000],i;
    scanf("%ld",&N);
    for(i=0;i<N;i++){
        scanf("%ld ",&a[i]); }
    reverse(N,a);
    return 0; }