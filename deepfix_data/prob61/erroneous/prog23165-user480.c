#include <stdio.h>
int main() {
    int n,k,i,j,oldCount;
    scanf("%d %d",&n,&k);
    int input[n],count[n],ountput[n];
    for(i=0;i<n;i++)
    scanf("%d",&input[i]);
    for(j=1;j<k;j++)
    count[j]=0;
    for(j=1;j<k;j++) {
        for(i=0;i<n;i++) {
            if(input[i]==j) {
                count[j]++; } } }
    for(j=1;j<k;j++) {
        oldCount=count[j];
        count[j]=total;
        total=total+oldCount; }
    for(j=1;j<k;j++)
    output[count[j]]=j;
    count[j]++;
    for(j=1;j<k;j++)
    printf("%d",output[j]);
    return 0; }