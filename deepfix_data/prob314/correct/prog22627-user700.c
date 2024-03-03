#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int t,a[n];
    int i=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&t);
    int h;
    for(i=0;i<t;i++) {
    scanf("%d",&h);
    if(h==0&&a[0]<a[1])
   {printf("Yes\n");
    continue;}
    else{if(h==0){
    printf("No\n");
    continue;}}
    if(h==(n-1)&&a[n-1]<a[n-2]){
    printf("Yes\n");
    continue;}
    else{if(h==(n-1)){
    printf("No\n");
    continue;}}
    if(a[i]<a[i-1]&&a[i]<a[i+1]){
    printf("Yes\n");
    continue;}
    else{
    printf("No\n");
    continue;}}
    	return 0; }