#include<stdio.h>
int s(int a[],int pos,int s1 ,int s2,int size){
    if(s1==s2&&pos==size)
        return 1;
    if(pos==size&&s1!=s2)
        return 0;
    return s(a,pos+1,s1+a[pos],s2,size)||s(a,pos+1,s1,s2+a[pos],size); }
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(s(a,0,0,0,n))
        printf("YES");
    else
        printf("NO");
    return 0; }