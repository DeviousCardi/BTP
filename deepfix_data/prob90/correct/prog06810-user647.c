#include <stdio.h>
int main(){
    int lnum,n,i,j,k,count=0;
    scanf("%d\n",&lnum);
    scanf("%d\n",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(j=0;j<n;j++){
        for (k=j+1;k<n;k++){
            if(((a[k]%2)==0)^((a[j]%2)==0)){
               break;}
            if (a[k]==(lnum-a[j])){
                count=1;
                printf("lucky");
                break; } }
        if(count==1)
          break; }
    if(count==0)
       printf("unlucky");
    return 0; }