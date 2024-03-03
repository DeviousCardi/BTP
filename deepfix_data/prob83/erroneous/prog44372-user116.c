#include <stdio.h>
void rotate_rightbyone(int num[],int size){
    int x,i;
    x=num[size-1]
    for(i=1;i<size;i++){
        num[size-i]=num[size-i-1]; }
    num[0]=x;
    return; }
int main() {
    int n,d,i,j,k;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++){
        scanf("%d",&num[i]); }
    scanf("%d",&d);
    for(j=1;j<=d;j++){
        rotate_rightbyone(num,n); }
    for(k=0;k<n;k++){
        printf("%d ",num[k]); }
    return 0; }