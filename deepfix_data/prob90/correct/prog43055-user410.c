#include <stdio.h>
int main() {
    int lucky,i,j,k,n,flag=0;
     scanf("%d",&lucky);
    scanf("%d",&n);
    int list[n];
    for(i=0;i<n;i++)
        scanf("%d",&list[i]);
            for(j=0;j<n;j++) {
            for(k=0;k<n;k++) {
            if((lucky-list[j])==list[k]) {
                    printf("lucky");
                    flag=1;
                    break ; } }
            if(flag==1)
            break; }
            if(flag==0)
               printf("unlucky");
    return 0; }