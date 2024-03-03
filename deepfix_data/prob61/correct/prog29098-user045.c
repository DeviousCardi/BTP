#include <stdio.h>
int main() {
    int n,k,c=0,oldC=0,total=0,i,j;
    scanf("%d %d",&n,&k);
    int input[n];
    int count[k+1];
    int output[n];
    for(i=0;i<n;i++)
    scanf("%d",&input[i]);
    for(i=0;i<k+1;i++) {
        for(j=0;j<n;j++) {
            if(input[i]==i)
            c++; }
        count[i]=c;
        c=0; }
    for(i=0;i<k+1;i++) {
        oldC=count[i];
        count[i]=total;
        total=total+oldC; }
    for(i=0;i<k;i++) {
        for(j=count[i];j<count[i+1];j++) {
         output[j]=i; } }
    for(i=0;i<n;i++)
    printf("%d ",output[i]); }