#include<stdio.h>
#include<strings.h>
#define MAX 100000000
void printrev( long int a[], int len) {
    if(len>0) {
        printf("%d ",a[len-1]);
        printrev(a,len-1); }
    else
      return; }
int main() {
    long int a[MAX], i,N;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    printrev(a,N);
    return 0; }