#include <stdio.h>
int main() {
    int lucky,number;
    scanf("%d\n%d",&lucky,&number);
    int NOS[number];
    int b = number;
    int i,j,flag=0;
    while(b>=0) {
        scanf("%d",&NOS[b]);
        b--; }
    for(i=0;i<number;i++) {
        for(j=0;j<number;j++)
        if((NOS[i]+NOS[j])==lucky && flag==0) {
            printf("lucky");
            flag++;
            break; } }
    if(flag==0) {
        printf("unlucky"); }
    return 0; }