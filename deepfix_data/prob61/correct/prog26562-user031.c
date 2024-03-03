#include <stdio.h>
int main(){
    int n,k,total=0,i,j,d,oldcount;
    scanf("%d %d",&n,&k);
    int count[k+1],output[n];
    for(i=0;i<n;i++)
    scanf("%d",&output[i]);
    for(i=0;i<=k;i++)
    count[i]=0;
    for(i=0;i<n;i++){
        count[output[i]]++; }
    for(i=0;i<=k;i++){
        oldcount=count[i];
        count[i]=total;
        total=total+oldcount; }
    if(1){
    for(i=0;i<=k;i++){
        for(j=count[i];j<=n;j++){
            output[j]=i; } } }
    else {
        for(i=0;i<=k;i++){
        for(j=i;j<=n+i;j++){
            output[count[i]]=i;
            count[i]++; } } }
    for(i=0;i<n;i++)
    printf("%d ",output[i]);
    return 0; }