#include <stdio.h>
int main(){
    int k,n,i;
    int number,frequency[1000];
    scanf("%d\n%d",&k,&n);
    for(i=0;i<n;i++) {
        scanf("%d",&number);
        frequency[number]=1; }
    for(i=0;i<n;i++) {
        if(frequency[i]!=0&&frequency[k-i]!=0) {
            printf("lucky");
            break; }
        else {
            printf("unlucky"); } }
    return 0; }