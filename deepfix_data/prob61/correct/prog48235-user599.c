#include <stdio.h>
#include <stdlib.h>
int main() {
    int *input,*output,*count,n,m,i,j,total=0,oldcount;
    scanf("%d%d",&n,&m);
    input=(int*)malloc(n*sizeof(int));
    output=(int*)malloc(n*sizeof(int));
    count=(int*)malloc((m+1)*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&input[i]);
    for(i=0;i<=m;i++)
        count[i]=0;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++) {
            if(input[i]==input[j]) {
                count[input[i]]++; } }
    for(i=0;i<=m;i++) {
        oldcount=count[i];
        count[i]=total;
        total=total+oldcount;
        printf("%d\n",count[i]); }
    for(i=0;i<n;i++) {
        output[count[input[i]]]=input[i];
        count[input[i]]++; }
    for(i=0;i<n;i++)
        printf("%d ",output[i]); }