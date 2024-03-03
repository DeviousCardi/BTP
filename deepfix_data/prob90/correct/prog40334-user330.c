#include <stdio.h>
int main(){
    int n,k,i,j,c=0;
    scanf("%d\n%d\n",&k,&n);
    int a[1000];
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1;j++){
            if(a[i]%2==0){
                if(a[j]%2==0)continue;
                else if(a[i]==k-a[j]){
                printf("lucky");
                c++;
                break; } }
            else{
                if(a[j]%2!=0)continue;
                else if(a[i]==k-a[j]){
                printf("lucky");
                c++;
                break; } } }
        if(c!=0)break; }
    return 0; }