#include <stdio.h>
int main() {
    int luckn,len,i,j,list[1001],flag=0,arr[501];
    scanf("%d%d", &luckn, &len);
    for(i=0; i<len; i++) {
            scanf("%d", &list[i]); }
    for(i=0; i<500; i++) {
            arr[i]=0;
            for(j=0;j<len; j++) {
                    if(i==list[j])
                        arr[i]++; } }
    for(j=0; j<len; j++) {
            if((luckn-list[j])<500 &&  arr[luckn-list[j]]!=0)
                flag=1; }
    if(flag==1)
        printf("lucky");
    else
       printf("unlucky");
    return 0; }