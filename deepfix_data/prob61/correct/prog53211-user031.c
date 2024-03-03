#include <stdio.h>
int main(){
    int n,k,total=0,i,oldcount;
    scanf("%d %d",&n,&k);
    int count[k],output[n];
    for(i=0;i<n;i++)
    scanf("%d",&output[i]);
    for(i=0;i<k;i++)
    count[i]=0;
    for(i=0;i<n;i++){
        count[output[i]]++; }
    for(i=0;i<k;i++){
        oldcount=count[i];
        count[i]=total;
        total=total+oldcount; }
    for(i=0;i<n;i++){
        output[count[output[i]]]=output[i];
        count[output[i]]++; }
    for(i=0;i<k;i++)
    printf("%d ",count[i]);
    return 0; }