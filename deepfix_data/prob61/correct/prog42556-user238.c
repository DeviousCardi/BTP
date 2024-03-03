#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,k,total=0,oldcount;
    int *input,*count,*output;
    scanf("%d%d",&n,&k);
    input=(int *)malloc(n*sizeof(int));
    count=(int *)malloc((k+1)*sizeof(int));
    output=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
       scanf("%d",&input[i]);
    for(int i=0;i<n;i++)
       count[input[i]]++;
    for(int i=0;i<n;i++) {
        oldcount=count[i];
        count[i]=total;
        total+=oldcount; }
    for(int i=0;i<k;i++) {
        while(count[i]<count[i+1]) {
            printf("%d ",i);
            output[count[i]]=i;
            count[i]+=1; } }
    for(int i=0;i<n;i++) {
        printf("%d ",output[i]); }
    return 0; }