#include <stdio.h>
int main(){
    int n1;
    scanf("%d",&n1);
    int a1[n1];
    int i;
    for(i=0;i<=n1-1;i++){
        scanf("%d",&a1[i]); }
    int n2;
    scanf("%d",&n2);
    int a2[n2];
    int j;
    for(j=0;j<=n2-1;j++){
        scanf("%d",&a2[j]); }
    int flag[n2];
    for(j=0;j<=n2-1;j++){
        flag[j]=0; }
    int order=0,breaker=0;
    for(j=0;j<=n2-1;j++){
        if (breaker==1){
            break; }
        for(i=0;i<=n1-1;i++){
            if(a2[j]==a1[i]){
                if(order<=i){
                flag[j]=1;
                order=i;}
                else {printf("NO\n");
                breaker=1; } } }
        if(flag[j]!=0){
                breaker=1; } }
     return 0; }