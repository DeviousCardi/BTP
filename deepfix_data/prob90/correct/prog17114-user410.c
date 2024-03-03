#include <stdio.h>
int main(){
    int lucky,i,j,k,n,flag=0;
     scanf("%d",&n);
    scanf("%d",&lucky);
    int list[n];
    for(i=0;i<n;i++)
        scanf("%d",&list[i]);
   for(i=0;i<=499;i++) {
            for(j=0;j<n;j++) {
           if(list[j]==i) {
            for(k=0;k<n;k++) {
                if((lucky-list[i])==list[k]) {
                    printf("lucky");
                    flag=1;
                    break; } }
            if(flag==0)
               printf("unlucky"); } } }
    return 0; }