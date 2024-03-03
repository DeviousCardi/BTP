#include <stdio.h>
int main(){
    int lucky,n,i,j,flag,num;
    int list[1000];
    scanf("%d",&lucky);
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&list[i]);
    flag=0;
    for(i=0;i<n;i++) {
            for(j=i;j<n;j++) {
                num=0;
                if(i!=j) {
                    num=list[i]+list[j];
                    if(num==lucky) {
                        flag=1;
                        break; }
                    else
                    continue; } } }
        if(flag==1)
        printf("lucky");
        else
        printf("unlucky");
    return 0; }