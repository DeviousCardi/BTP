#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[20];
    char b[20];
    int i=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        scanf("%c ",&b[i]); }
    int j;
    int c;
    i=0;
    while(i<n){
        c=0;
        for(j=i;j<i+a[i];j++){
            if(a[j]==a[i]){
                c++; }
            else{
                c=0;
                break; } }
        i=i+a[i]-1; }
    if(c==0)
        printf("No");
    else
        printf("Yes");
    return 0; }