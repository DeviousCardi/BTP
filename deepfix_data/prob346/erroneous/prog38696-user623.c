#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sale[n],count[100]={};
    for(i=0;i<n;i++) {
        scanf("%d",&sale[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<=99;j++) {
            if(sale[i]==j)
            count[j]++; } }
    printf("end");
    return 0; }