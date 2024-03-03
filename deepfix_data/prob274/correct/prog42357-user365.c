#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int num[n],arr[2*n];
    int i=0,j=0,brkpt=0,count=0;
    for(i=0;i<n;i++){
        scanf("%d",&num[i]); }
    for(i=0;i<2*n;i++){
        arr[i]=num[j];
        j=num[j]-1;
        printf("%d\n",arr[i]); }
    for(i=n;i<2*n;i++){
        for(j=n+1;j<2*n;j++){
            if(arr[j]==arr[i]){
                brkpt=1;
                count++;
                break; } }
        if(brkpt==1) break; }
    printf("%d\n",count);
    return 0; }