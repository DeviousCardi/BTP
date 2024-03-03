#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[20];
    int i=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    sort(a,n);
    int j;
    i=0;
    while(i<n){
        int b=0;
        for(j=i;j<i+a[i];j++){
            if(a[j]==a[i]){
                b++; }
            else{
                b=0;
                break; } }
        i=i+a[i]-1; }
    if(b==0)
        printf("No");
    else
        printf("Yes");
    return 0; }