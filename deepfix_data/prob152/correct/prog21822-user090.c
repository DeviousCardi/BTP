#include <stdio.h>
long int N;
long int s;
long int groups(long int array[],int j,int p){
      if(p==N){
          return 0; }
      if(j+array[p]==s/2){
          return 1; }
      return groups(array,j+array[p],p+1);
      return groups(array,j,p+1); }
int main() {
    long int i,array[100000],x;
    scanf("%ld\n",&N);
    for(i=0;i<N;i++) {
        scanf("%ld",&array[i]);
        s+=array[i]; }
    x=groups(array,0,0);
    if(x==0){
        printf("NO"); }
    else{
        printf("YES"); }
    return 0; }