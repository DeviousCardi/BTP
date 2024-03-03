#include <stdio.h>
int main() {
    int n,i,j,temp;
    scanf("%d",&n);
    int order[n];
    for(i=0;i<n;i++)
    scanf("%d",&order[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<n-i-1;j++) {
            if(order[j]>order[j+1]) {
                temp=order[j];
                order[j]=order[j+1];
                order[j+1]=temp; } } }
    for(i=0;i<n;i++)
    printf("%d",order[i]);
    printf("end");
    return 0; }