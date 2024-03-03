#include <stdio.h>
#include <stdlib.h>
int read_into_array(long int s[],int size) {
    int i;
    for(i=0;i<size;i++) {
        scanf("%ld",&s[i]); }
    return i; }
int main() {
    int N,i,j;
    long int t[N],S;
    scanf("%d",&N);
    read_into_array(t,N);
    scanf("%ld",&S);
    for(i=0;i<N;i++) {
      for(j=i+1;j<N;j++) {
          if(t[i]+t[j]==S)
          printf("(%ld,%ld)"); } }
	return 0; }