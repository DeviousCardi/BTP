#include <stdio.h>
int check(int N,int arr[N]) {
    int p;
    p=arr[N]+check(N-1,arr[N-1]);
    return p; }
int main() {
   int N,S,arr[N],k;
   scanf("%d %d",&N,&S);
   for(int i=0;i<N;i++) {
        scanf("%d",&arr[N]); }
  k=check(N,arr[N]);
    if(S==k)
    printf("YES");
    else
    printf("NO");
    return 0; }