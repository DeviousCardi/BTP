#include <stdio.h>
int k;
int fun(int n,int array[k],int check,int sum) {
    if(n==0)
    return 0;
    if(sum==check)
    return 1;
    return fun(n-1,array,check,sum+array[k-n])||fun(n-1,array,check,sum); }
int main() {
    int n,check,i;
    scanf("%d%d",&n,&check);
    k=n;
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]) }
    if(fun(n,array,check,0))
    printf("YES");
    else
    printf("NO");
    return 0; }