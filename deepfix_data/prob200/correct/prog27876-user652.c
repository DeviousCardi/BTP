#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) { }
int main() {
    int n,k,upperLimit;
        scanf("%d %d",&n,&k);
    int i,num[100];
        for(i=0;i<n;i++)
            scanf("%d",&num[i]);
    for(i=0;i<n;i++) {
            if(upperLimit<num[i]) upperLimit=num[i]; }
    printf("%d",upperLimit);
    return 0; }