#include<stdio.h>
#include<strings.h>
int N;
int main() {
    int Arr[200000000],i;
    scanf("%d",&N);
    printf("%d",N);
    for(i=0;i<N;i++) {
           scanf("%d",&Arr[i]); }
    for(i=0;i<N;i++) {
          printf("%d",Arr[i]); }
       return 0; }