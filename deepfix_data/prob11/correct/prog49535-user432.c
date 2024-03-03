#include <stdio.h>
int sub(int [],int,int,int);
int main() {
    int n,s,a[30],i,flag;
    scanf("%d%d",&n,&s);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    flag=sub(a,0,n,s);
    if(flag==1)
        printf("YES");
    else
        printf("NO");
    return 0; }
int sub(int a[],int i,int n,int s){
    if(i+1==n){
        if(a[i]==s)
            return 1;
        else
            return 0; }
    if(a[i]==s)
        return 1;
    return (a,i+1,n,s)||(a,i+1,n,s-a[i]); }