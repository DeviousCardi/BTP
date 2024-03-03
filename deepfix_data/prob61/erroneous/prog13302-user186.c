#include<stdio.h>
#include<stdlib.h>
int main() {
    int i,n,k,*input,*count,*output,oldcount,total;
    scanf("%d%d",&n,&k);
    count=(int*)calloc((k+2),sizeof(int));
    input=(int*)malloc(n*sizeof(int));
    output=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&input[i]);
    for(i=0;i<n;i++) {
        count[input[i]]+=1; }
    free(input);
    total=0;
    for(i=0;i<=k;i++) {
        oldcount=count[i];
        count[i]=total;
        total=total+oldcount; }
    count[k+1]=n-1;
    for(i=0;i<n;i++)
    printf("%d ",count[i]);
    i=1
    while(count[i]!=n) {
        output[count[i]]=i;
        count[i]=count[i]+1;
        if(count[i]==count[i+1])
        i=i+1; }
    free(output);
    return 0; }