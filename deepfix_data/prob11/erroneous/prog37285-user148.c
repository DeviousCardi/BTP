#include <stdio.h>
int ncalls=0;
int is_that_possible(int a[],int indx_srchd[],int n_srchd,int size,int n_calls) {
    if (n_srchd==0)
    return 1;
    int i,flag=0;
    for(i=0;i<(size-n_calls);i++) {
          if(a[indx_srchd[i]]<=n_srchd) {
              flag=1;
              break; } }
        if(flag==0)
        return 0;
    for(i=0;i<=size-ncalls;i++) {
        ncalls++;
        return is_that_possible(a,indx_srchd,s-a[i],size,n_calls) } }
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
    if(is_that_possible(array,temp,s,n,0))
        printf("YES");
    else
        printf("NO");
    return 0; }