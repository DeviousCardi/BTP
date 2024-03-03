#include <stdio.h>
#include <stdlib.h>
int ackermann(int i,int j,int k)
{   if(i>=0 && j>=0)
            {if(i==0) {
                if(k==j+1) {
                    printf("%d %d",i,j);
                    return 1; } }
            else if(i>0 && j==0) {
                if(ackermann(i-1,1,k)) return 1; }
            else if(i>0 && j>0) {
                if(ackermann(i-1,ackermann(i,j-1,k),k)) return 1; } }
  return 0; }
int main(){
    int k ,i,j;
    scanf("%d",&k);
    for(i=0;i<=3;i++) {
        for(j=0;j<=5;j++) {
            ackermann(i,j,k); } }
    printf("-1");
    return 0; }