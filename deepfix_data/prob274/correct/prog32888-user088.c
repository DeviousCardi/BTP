#include <stdio.h>
int main(){
    int n,arr[100],rep[1000],i,j,flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    rep[0]=1;
    for(i=1;i<100;i++)
    rep[i]=arr[rep[i-1]-1];
    for(i=1;i<100;i++) {
        for(j=i-1;j>=0;j--);
        if(rep[j]==rep[i]) {
            flag=i;
            break; } }
    printf("%d %d",flag,i-j-1);
    return 0; }