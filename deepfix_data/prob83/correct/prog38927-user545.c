#include <stdio.h>
int main() {
    int arr[100],size,d;
    scanf("%d\n",&size);
    for(int a=0;a<size;a++)
    scanf("%d ",&arr[a]);
    scanf("\n%d",&d);
    int ind=size-d;
    for(int a=ind;a<size;a++)
    printf("%d ",arr[a]);
    for(int a=0;a<ind;a++)
    printf("%d ",arr[a]);
    return 0; }