#include <stdio.h>
int main(){
    int n,d=0,t=0;
    scanf("%d",&n);
    int arr[n],travel[1000];
    travel[0]=1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(int i=0;;i++){
        int j;
        travel[i+1]=arr[travel[i]];
        for(j=i;j>=0;j--){
            if(travel[j]==travel[i+1]){
                d=i+1-j;
                printf("%d",d);
                t=i+1;
                break; } }
        if(j!=-1)
            break; }
    printf("%d  %d",t,d);
    return 0; }