#include <stdio.h>
int main() {
    int k,n,i,j;
    scanf("%d \n %d",&k,&n);
    int num[n];
    if(n>1){
    for(i=0;i<n;i++)
            scanf("%d",&num[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if((num[i]+num[j])==k) {
                printf("lucky");
                break; } }
        if((num[i]+num[j])==k)
        break;
        if(i==(n-1))
        printf("unlucky"); } }
    else
    printf("unlucky");
    return 0; }