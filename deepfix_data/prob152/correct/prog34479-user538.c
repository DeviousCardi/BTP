#include <stdio.h>
int equal(int a[],int n,int s){
    if(s<0)
    return 0;
    if(s==0)
    return 1;
    else{
        return(equal(a,n-1,s-a[n-1])||equal(a,n-1,s)); } }
int main() {
    int n,i,k,s;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    k=equal(a,n,s);
    if(k==1)
    printf("YES");
    else if(k==0)
    printf("NO");
    return 0; }