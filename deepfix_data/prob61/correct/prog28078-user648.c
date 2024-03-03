#include<stdio.h>
int main(){
    int n,k,i,j,oldCount,total=0;
    scanf("%d%d",&n,&k);
    int count[k],output[n],a[n];
    for(i=0;i<k;i++)
    count[i]=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<k;i++) {
        for(j=0;j<n;j++) {
            if(i==a[j])
            count[i]+=1; } }
    for(i=0;i<k;i++) {
        oldCount=count[i];
        count[i]=total;
        total=total+oldCount; }
    for(i=0;i<n;i++) {
        output[count[a[i]] -1]=a[i];
        count[a[i]]=count[a[i]]+1; }
    for(i=0;i<n;i++)
    printf("%d ",output[i]);
    return 0; }