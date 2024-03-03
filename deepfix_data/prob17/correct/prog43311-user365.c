#include <stdio.h>
int main(){
    int n1,i;
    scanf("%d",&n1);
    int a1[n1];
    for(i=0;i<=n1-1;i++){
        scanf("%d",&a1[i]); }
    int n2;
    scanf("%d",&n2);
    int a2[n2];
    for(i=0;i<=n2-1;i++){
        scanf("%d",&a2[i]); }
    int j,flag[n2];
    for(i=0;i<=n2-1;i++){
        flag[i]=1; }
    int check=1,count;
    i=0;
    j=0;
     while(j<=n2-1){
         while(i<=n1-1){
             if(a2[j]==a1[i]){
                flag[j]=0; }
             i++; }
         j++;
         printf("%d\n",flag[j]); }
     for(j=0;j<=n2-2&&flag[j]==0;j++){ }
     if(j==n2-2){
         printf("YES"); }
     else{ printf("NO");}
     return 0; }