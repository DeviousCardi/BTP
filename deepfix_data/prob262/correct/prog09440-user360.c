#include<stdio.h>
#include<strings.h>
void printrev( long int a[], long int len) {
    if(len>0) {
        printf("%ld ",a[len-1]);
        printrev(a,len-1); }
    else
      return; }
int main() {
    long int i,N;
    scanf("%ld",&N);
     long int a[N];
    for(i=0;i<N;i++)
        scanf("%ld",&a[i]);
    printrev(a,N);
    return 0; }