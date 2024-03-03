#include <stdio.h>
int N,S,sum=0;
int check(int sum,int index,int a[N]) {
    if(index==N-1)
        return S==sum;
  return check((sum+a[index]),int a,index+1)||check(sum,index+1,int a); }
int main() {
    int i,c;
    int j=0;
    scanf("%d",N,S);
    int a[N];
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    c=check(sum,j,a);
    if(c==1)
    printf("YES");
    else
    printf("NO");
    return 0; }