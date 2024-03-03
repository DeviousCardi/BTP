#include <stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int a[1000],i;
    int b[1000];
    for(i=0;i<2*n+1;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<2*n+1;i++) {
        for(int j=i+1;j<2*n+1;j++) {
            if(a[i]==a[j]) {
            b[count]=j-i;
            count++;
            break; } } }
    int min=b[0];
    for(i=0;i<count;i++) {
        if(b[i]<min)
        min=b[i]; }
    printf("%d",min);
    return 0; }