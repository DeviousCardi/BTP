#include <stdio.h>
int equal(int array[],int total,int n) {
    int i,sum=0;
    for(i=0;i<n;i++)
    sum=sum+array[i]||sum;
    if (sum==total/2)
    return 1;
    else
    return 0; }
int main() {
    int n,a,i,total,array[30];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    for(i=0;i<n;i++)
    total=total+array[i];
    if(total%2==1)
    printf("NO");
    else {
    a=equal(array,total,n);
    if(a==1)
    printf("YES");
    else
    printf("NO"); }
    return 0; }