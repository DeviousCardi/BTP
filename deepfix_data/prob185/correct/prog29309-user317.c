#include<stdio.h>
int cal(int a[],int n,int s){
    if(s<0)
    return 0;
    if(s==0)
    return 1;
    if(a[n-1]>s)
    return cal(a,n-1,s);
    return cal(a,n-1,s-a[n-1])+cal(a,n-1,s); }
int main(){
    int n,s;
    scanf("%d %d\n",&n,&s);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    if(cal(a,n,s)!=0)
    printf("YES");
    else printf("NO");
    return 0; }