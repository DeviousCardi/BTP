#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int flag;
    for(i=0;i<n;i++){
        flag=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                flag++; }
        }if(flag!=a[i])break; }
    if(flag==a[i])printf("Yes");
    else printf("No");
    return 0; }