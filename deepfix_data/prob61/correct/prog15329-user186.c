#include<stdio.h>
#include<stdlib.h>
int main() {
    int i,n,k,*input,*count,*output,oldcount,total;
    scanf("%d%d",&n,&k);
    count=(int*)calloc((k+1),sizeof(int));
    input=(int*)malloc(n*sizeof(int));
    output=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&input[i]);
    if(n==1)
    printf("%d",input[0]);
    else
    {for(i=0;i<n;i++) {
        count[input[i]]+=1; }
    total=0;
    for(i=0;i<=k;i++) {
        oldcount=count[i];
        count[i]=total;
        total=total+oldcount; }
    i=0;
    while(count[i]!=n) {
        output[count[i]]=i;
        if(count[i]==count[i+1])
        i=i+1;
        else
        count[i]+=1; }
    for(i=0;i<n;i++)
    printf("%d ",output[i]);}
    free(output);
    free(input);
    free(count);
    return 0; }