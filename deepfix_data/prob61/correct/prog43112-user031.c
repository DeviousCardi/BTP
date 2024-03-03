#include <stdio.h>
int main(){
    int n,k,total,i;
    scanf("%d %d",&n,&k);
    int count[k],output[n];
    for(i=0;i<n;i++)
    scanf("%d",&output[i]);
    for(i=0;i<k;i++)
    count[i]=0;
    for(i=0;i<n;i++){
        count[output[i]]++; }
    for(i=0;i<k;i++)
    printf("%d ",count[i]);
    return 0; }