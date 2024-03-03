#include <stdio.h>
#include <limits.h>
int main(){
  int n,inp,i,j,count,x,min=INT_MAX;
  int a[200],b[200];
  scanf("%d",&n);
    for(i=0;i<2*n;i++){
        scanf("%d ",&inp);
        a[i]=inp; }
    for(i=0;i<2*n;i++){
        for(j=1,count=0;j<2*n;j++){
            count=count+1;
        if(a[i]==a[j]){
           for(x=0;x<n;x++){
           b[x]=count; }
           break; }
            else
            continue; } }
    for(i=0;i<n;i++){
        if(min>b[x])
        min=b[x];
        else
        continue; }
    printf("%d ",min);
    return 0; }