#include <stdio.h>
int equal(int a[],int i,int s){
    if(s<0)
    return 0;
    if(s==0)
    return 1;
    else{
        return(equal(a,i-1,s-a[i])||equal(a,i-1,s)); } }
int main() {
    int n,i,k,s=0;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    k=equal(a,n-1,s);
    if(k==1)
    printf("YES");
    else
    printf("NO");
    return 0; }