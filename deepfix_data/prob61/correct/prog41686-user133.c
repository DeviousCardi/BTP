#include <stdio.h>
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int *input=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%d",input+i);
    int *count=(int*)malloc((k+1)*sizeof(int));
    for(int i=0;i<k+1;i++)
        *(count+i)=0;
    int *output=(int*)malloc(n*sizeof(int));;
    for(int i=0;i<k+1;i++) {
        *(count+i)=0;
        for(int j=0;j<n;j++) {
            if(input[j]==i)
            *(count+i)=*(count+i)+1; } }
    int l=0;
    for(int i=0;i<k+1;i++) {
        if(*(count+i)>0) {
            for(int j=0;j<*(count+i);j++) {
                *(output+l)=i;
                l++; } }
        else
        continue; }
    for(int i=0;i<n;i++)
    printf("%d ",*(output+i));
    free(input);
    free(count);
    free(output); }