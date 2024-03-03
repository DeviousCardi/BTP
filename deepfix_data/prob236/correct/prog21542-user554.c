#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int book[n],order[n],neword[n];
    for(int i=0;i<n;i++){
        scanf("%d",&book[i]); }
    for(int i=0;i<n;i++){
        scanf("%d",&order[i]); }
    for(int i=0;i<n;i++){
        neword[order[i]]=book[i]; }
    for(int i=0;i<n;i++){
        printf("%d %d %d",neword[i]); }
    printf("end");
    return 0; }