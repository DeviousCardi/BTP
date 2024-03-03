#include <stdio.h>
int main(){
    int n,i,j,k=0,c=0;
    scanf("%d",&n);
    int sale[n],count[100]={};
    for(i=0;i<n;i++) {
        scanf("%d",&sale[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<=99;j++) {
            if(j!=0) {
            if(sale[i]==j)
            count[j]++; }
            else
            if(sale[i]==j)
             k++; } }
    if(k>0) {
        for(i=1;i<=k;i++) {
            printf("%d ",c); } }
        for(i=1;i<=99;i++) {
            if(count[i]!=0) {
                for(j=0;j<count[i];j++)
                printf("%d ",i); }
            else
            continue; }
    printf("end");
    return 0; }