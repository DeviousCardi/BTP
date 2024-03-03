#include <stdio.h>
int main() {
    int n,num[100],i,count,j,flag=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) scanf("%d ",&num[i]);
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(a[i]==a[j]){
                flag=1;
                break; } }
        if(flag==1) break; }
    printf("%d\n",num[i]);
    for(i=1;i<=n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(i!=a[j]) count++; }
        if(count==n) break; }
    printf("%d",i);
    return 0; }