#include <stdio.h>
int main() {
    int k,n,i,j;
    scanf("%d \n %d",&k,&n);
    int num[n];
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(i=0;i<n;i++); {
        for(j=0;j<n;j++) {
            if((num[i]+num[j])==k) {
                printf("lucky");
                break; } }
        if(i==(n-1));
        printf("unlucky"); }
    return 0; }