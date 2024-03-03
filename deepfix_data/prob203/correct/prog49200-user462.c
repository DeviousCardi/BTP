#include <stdio.h>
int main() {
    int a[50];
    int n,i,j,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        for(j!=i;j<n;j++){
            if(a[i]==a[j]){
                d=1;
                break; }
            else if(a[i==a[j]&&j==n-1]){
                printf("YES");
                break; }
            else if(a[i]!=a[j]&&j==n-1){
                printf("NO");
                break; }
            else{
                d=2;
                continue; } }
        if(a[i]==a[j]){
            break; }
        else{
            continue; } }
    if (d==1){
        printf("YES"); }
    else if(d==2){
        printf("NO"); }
	return 0; }