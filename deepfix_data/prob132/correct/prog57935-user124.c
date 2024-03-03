#include <stdio.h>
int main(){
    int i,j,n,s,t=0;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for (i=0;i<n;i++){
        s=0;
        for (j=0;j<n;j++){
            if (a[j]==a[i]){
                s=s+1; } }
        printf("%d\n",s);
        if (s==a[i]){
            t=t+1; } }
    printf("%d\n",t);
    if (t==n){
        printf("Yes");
    }else {
        printf("No"); }
    return 0; }