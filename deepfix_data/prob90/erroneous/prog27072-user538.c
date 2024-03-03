#include <stdio.h>
int main(){
    int k,n,p,i,j;
    int flag=0;
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    int num[n];
    for(i=0;i<n;i++){
        scanf("%d",&num[i]); }
    for(i=o;i<n;i++) {
        for(j=0;j<n;j++)
        flag=0; {
            if((num[j]!=(num[i])) {
               if(num[j]+num[i]==k)
               {printf("lucky");
               break; } } } }
    if(flag==1)
    printf("unlucky");
    return 0; }