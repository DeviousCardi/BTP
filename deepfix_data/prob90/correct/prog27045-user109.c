#include <stdio.h>
int main(){
    int lucky_no;
    int n;
    scanf("%d\n%d",&lucky_no,n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]); }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(num[i]+num[j]==lucky_no){
                printf("lucky");
                i=n;
                break; } } }
    return 0; }