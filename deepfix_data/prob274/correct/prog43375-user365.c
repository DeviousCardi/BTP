#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int num[n],arr[n];
    int i=0,j=0;
    for(i=0;i<n;i++){
        scanf("%d",&num[i]); }
    for(i=0;i<n;i++){
        arr[i]=num[j];
        j=num[j]-1;
        printf("%d\n",arr[i]); }
    return 0; }