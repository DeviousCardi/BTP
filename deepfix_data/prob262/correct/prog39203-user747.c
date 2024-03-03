#include<stdio.h>
#include<strings.h>
int reverse(int N,int a[N-1]){
  if(N==0)
  return 0;
  printf("%d",a[N-1]);
  return reverse(N-1,a[N-2]);}
int main() {
    int N=0,a[100],i;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d ",&a[i]); }
    return 0; }