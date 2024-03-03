#include <stdio.h>
#include <stdlib.h>
int ack(int m,int n){
if (m==0)
return n+1;
if ((m>0)&&(n==0))
return ack(m-1,1);
return ack(m-1,ack(m,n-1)); }
int main() {
    int n,i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<=3;i++){
        for(j=0;j<=5;j++)
    if(n==ack(i,j)){
    printf("%d %d",i,j);
    count++; } }
    if(count==0)
    printf("%d",-1);
	return 0; }