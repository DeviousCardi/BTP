#include <stdio.h>
int ncalls=0;
int is_that_possible(int a[],int indx_srchd[],int n_srchd,int size) {
    if (n_srchd==0)
    return 1;
    int i; {
        for(i=0;i<size;i++) {
          if(a[indx_srchd[i]]<=n_srchd)
          break; } } { } }
int main() {
    int n,i;
    long int s;
    scanf("%d",&n);
    scanf("%ld",&s);
    int array[n];
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    int temp[n];
    for(i=0;i<n;i++)
        temp[i]=i;
    if(is_that_possible(array,temp,s,n))
        printf("YES");
    else
        printf("NO");
    return 0; }