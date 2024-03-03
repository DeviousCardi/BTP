#include <stdio.h>
int main() {
    int arr[150],num,count=0;
    scanf("%d\n",&num);
    for(int a=0;a<num;a++)
    scanf("%d ",&arr[a]);
    for(int b=1;b<num-1;b++)
    if(arr[b]>arr[b-1]&&arr[b]>arr[b+1])
    count++;
    printf("%d",count);
    return 0; }