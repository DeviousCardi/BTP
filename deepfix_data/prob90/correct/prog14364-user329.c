#include <stdio.h>
int main() {
    int luckn,len,i,j,list[1001],flag=0;
    scanf("%d%d", &luckn, &len);
    for(i=0; i<len; i++) {
            scanf("%d", &list[i]); }
    for(i=0; i<len-1; i++) {
            for(j=i; j<len; j++) {
                    if((list[i]+list[j])==luckn)
                        flag=1; } }
    if(flag==1)
        printf("lucky");
    else
        printf("unlucky");
    return 0; }