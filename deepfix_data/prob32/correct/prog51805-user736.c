#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++){
    scanf("%d\n",&a[i]);}
    if(a[0]<a[1]||a[n]<a[n-1]){
    printf("Yes\n"); }
    else {
    printf("No\n"); }
    for(i=2;i<n;i++){
    if(a[i]<a[i-1]||a[i]<a[i+1]){
    printf("Yes\n");}
    else{
    printf("No\n");}}
    return 0; }