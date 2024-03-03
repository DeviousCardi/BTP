#include <stdio.h>
int main(){
    int k,size,count=0;
    scanf("%d\n %d\n",&k,&size,i,j);
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]) }
    for(i=0;i<size;i++){
        if(count==1)
        break;
        for(j=i+1;j<size;j++){
            if(arr[i]+arr[j]==k){
                printf("lucky");
                count++;
                break; } }
    if(count==0)
        printf("unlucky");
    return 0; }