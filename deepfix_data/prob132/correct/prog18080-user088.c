#include <stdio.h>
int main() {
    int n,arr[1000],flag=1,i,temp;
    scanf("%d",&n);
    for(i=0;i<1000;i++)
    arr[i]=0;
    for(i=0;i<n;i++) {
        scanf("%d,",&temp);
        arr[temp]++; }
    for(i=1;i<1000;i++) {
        if(arr[i]!=i&&arr[i]!=0) {
            flag=0;
            break; } }
    if(flag==1)
    printf("Yes");
    else
    printf("No");
    return 0; }