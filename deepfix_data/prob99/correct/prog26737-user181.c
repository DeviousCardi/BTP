#include <stdio.h>
int max(int a, int b){
  if(a<b)
    return b;
  return a; }
int main(){
  int ar[1100], lis[1100], N, i, j, ans;
  scanf("%d", &N);
  for(i=0;i<N;i++)
    scanf("%d", &ar[i]);
  lis[0]=1;
  for(i=1; i<N; i++){
    lis[i]=1;
    for(j=0;j<i;j++){
      if(ar[j]<ar[i]){
	lis[i] = max(lis[i], lis[j]+1); } } }
  ans = -1;
  for(i=0;i<N;i++)
    ans = max(ans, lis[i]);
  printf("%d\n", ans);
  return 0; }