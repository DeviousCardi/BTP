#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,k,*input,*count,*output,sum=0,Oldcount;
    scanf("%d%d",&n,&k);
    input=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",input+i);
    count=(int *)malloc(sizeof(int)*(k+1));
    output=(int *)malloc(sizeof(int)*n);
    for (int i=0;i<k+1;i++){
        *(count+i)=0;
        for(int j=0;j<n;j++){
            if(*(input+j)==i)
                *(count+i)+=1; }
        oldCount=*(count+i);
        *(count+i)=sum;
        sum+=oldCount; }
    for(int i=0;i<k+1;i++){
        for(int j=0;j<n;j++){
            if(input[j]==i){
                output[count[i]]=i;
                count[i]+=1; } } }
    for(int i=0;i<k+1;i++)
        for(int j=0;j<count[i];j++)
            printf("%d ",i);
    return 0; }