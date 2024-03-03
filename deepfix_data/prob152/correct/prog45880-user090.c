#include <stdio.h>
int N;
int groups(int array[],int j,int p){
      if(p==N)
      return 0;
      if(j+array[p]==j)
      printf("YES");
      groups(array,j+array[p],p+1)||(array,j,p+1);
      printf("%d",j); }
int main() {
    int i,array[100000],x;
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf("%d",&array[i]); }
    x=groups(array,0,0);
    return 0; }