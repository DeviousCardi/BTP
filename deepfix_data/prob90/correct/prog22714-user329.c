#include <stdio.h>
int main() {
    int luckn,len,i,j,list[1001],flag=0,arr[500];
    scanf("%d%d", &luckn, &len);
    for(i=0; i<len; i++) {
            scanf("%d", &list[i]); }
    for(i=0; i<500; i++) {
            arr[i]=0;
            for(j=0;j<len; j++) {
                    if(i==list[j])
                        arr[i]++; } }
        for(i=0; i<500; i++)
            printf("%d",arr[i]);
    for(i=0; i<501/2; i++) {
            for(j=0; j<len; j++) {
                    if(i==list[j]) {
                            if(arr[luckn-i]!=0) {
                                    flag=1;
                                    break; } } } }
    if(flag==1)
        printf("lucky");
    else
       printf("unlucky");
    return 0; }