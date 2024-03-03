#include <stdio.h>
int main() {
    int sum(int a[],int n,int check);
    int n,s;
    scanf("%d %d",&n,&s);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int p=sum(a,n,s);
    if(p==1) {
        printf("YES"); }
    else
    printf("NO");
    return 0; }
int sum(int a[],int n,int check) {
    if(check==0)
    return 1;
    if(n==0&&check!=0)
    return 0;
if(a[n-1]>check)
return sum(a,n-1,check);
if(sum(a,n-1,check)==1)
return 1;
if(sum(a,n-1,check-a[n-1]))
return 1; }