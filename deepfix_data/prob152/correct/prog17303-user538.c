#include <stdio.h>
int equal(int a[],int i,int s){
    if(s<0)
    return 0;
    if(s==0)
    return 1;
    else{
        return(equal(a,i,s-a[i])||equal(a,i,s)); } }
int main() {
    int n,i,k,j,s=0;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<n;j++) {
        s=s+a[j]; }
    k=equal(a,n-1,s);
    if(k==0)
    printf("YES");
    else if(k==1)
    printf("NO");
    return 0; }