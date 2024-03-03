#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int input[n];
    for(int i=0;i<n;i++)
        scanf("%d",&input[i]);
    int count[k+1];
    for(int i=0;i<k+1;i++)
        count[i]=0;
    int output[n];
    for(int i=0;i<k+1;i++) {
        for(int j=0;j<n;j++) {
            if(input[j]==i)
            count[i]+=1; } }
    int oldCount=0,total=0;
    for(int i=0;i<k+1;i++) {
        oldCount=count[i];
        count[i]=total;
        total+=oldCount; }
    for(int i=0;i<k+1;i++) {
        if(count[i]==0&&count[i+1)==0)
        continue;
        else{
         while(count[i]!=*count[i+1]) {
            output[count[i]]=i;
            count[i]+=1; } } }
    for(int i=0;i<n;i++)
       printf("%d ",output[i]); }