#include <stdio.h>
int globalvar;
int main(){
    int lucky_no;
    int n;
    scanf("%d%d",&lucky_no,&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]); }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(num[i]+num[j]==lucky_no){
                printf("lucky");
                globalvar=1;
                break; } }
        if(globalvar==1){
            break; }
        if(i==n-1){
            printf("unlucky"); } }
    return 0; }