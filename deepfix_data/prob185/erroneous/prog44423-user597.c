#include<stdio.h>
int sparray(int a[],int sum,int size,int pos,int total) {
    if(sum==total) return 1;
    if(pos==size) return 0;
        return sparray(a,sum+a[pos],size,pos+1,total) ||
sparray(a,sum,size,pos+1,total) ; }
int main() {
        int i,n,total;
        scanf("%d %d\n",&n,&total);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        int result=sparray(a,0,0,n,0,total);
        printf("%d",result);
        return 0; }