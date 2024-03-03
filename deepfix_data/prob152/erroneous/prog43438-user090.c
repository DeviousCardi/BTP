#include <stdio.h>
int groups(int array[],int N,int j,int p){
      if(p==N)
      return 0;
      if(j+array[p]==j)
      printf("YES");
      return groups(array[],N,j+a[p],p+1)||(array[],N,j,p+1); }
int main() {
    int N,i,array[100000],x;
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf("%d",&array[i]); }
    x=groups(array,N,0,0);
    return 0; }