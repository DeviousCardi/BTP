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
    for(i=0;i<=n1-1;i++){
        scanf("%d",&a2[i]); }
    int j,flag[n2];
    int check=0,count;
    i=0;
    j=0;
     while(j<=n2-1){
         while(i<=n1-1){
             if(a2[j]==a1[i]){
                 flag[j]=0; }
             i++; }
         j++; }
     for(j=0;j<=n2-2&&check==1;j++){
         if(flag[j]==flag[j+1]){
             check=1;
             count=j; }
         else {check==0;}
         printf("%d",check); }
     if(count==n2-2){
         printf("YES"); }
     else printf("NO");
     return 0; }