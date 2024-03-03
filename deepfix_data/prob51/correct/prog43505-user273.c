#include <stdio.h>
int main() {
    int n,k,i,j;
    scanf("%d %d",&n,&k);
    int chair[n];
    for(i=0;i<n;i++) {
        scanf("%d",&chair[i]); }
    int temp;
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(chair[i]<chair[j]) {
                temp=chair[i];
                chair[i]=chair[j];
                chair[j]=temp; } } }
    printf("%d",chair[k]);
    return 0; }