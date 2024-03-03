#include<stdio.h>
#include<strings.h>
void printrev( int a[], int len) {
    if(len>0) {
        printf("%d ",a[len-1]);
        printrev(a,len-1); }
    else
      return; }
int main() {
    int a[1000];
    int i,N;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    printrev(a,N);
    return 0; }