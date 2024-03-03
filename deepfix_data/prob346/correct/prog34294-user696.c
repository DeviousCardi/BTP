#include <stdio.h>
int main(){
    int i,j,amount[1000];
    int n,t,count;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&amount[i]); }
    for(j=0;j<=99;j++) {
         count=0;
        for(i=0;i<n;i++) {
            if(amount[i]==j)
            count=count+1; }
        for(i=0;i<count;i++) {
            printf("%d ",j); } }
    printf("end");
    return 0; }