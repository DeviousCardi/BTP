#include <stdio.h>
int main() {
    int i,n,j,a[100],count=0;
    scanf("%d",&n);
    for(i=0;i<100;i++){
        scanf("%d ",&a[i]); }
    for(i=0;i<n;i++){
        if(i%2==0){
            for(j=1;j<n;j++){
                    if(a[i]==a[j]){
                    count=count+1;
                    if(count==2){
                    printf("%d",a[i]);
                    break; } } } } }
    return 0; }