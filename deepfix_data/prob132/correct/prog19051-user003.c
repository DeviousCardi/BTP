#include <stdio.h>
int main() {
    int n,i,j,k=0;
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
        }if(flag!=a[i])
            k=1; }
    if(k==1)
    printf("No");
    else
    printf("Yes");
    return 0; }