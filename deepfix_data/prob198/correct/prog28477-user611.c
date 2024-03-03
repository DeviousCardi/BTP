#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,i,j,x,y;
    scanf("%d",&a);
    int arr1[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr1[i]); }
    scanf("%d",&b);
    int arr2[b];
    for(i=0;i<b;i++){
        scanf("%d",&arr2[i]); }
    for(i=0;i<a;i++){
        for(j=i+1;j<a;j++){
           if(arr1[i]<arr1[j]){
               continue; }
           else if(arr1[i]>arr1[j]){
               x=arr1[i];
               arr1[i]=arr1[j];
               arr1[j]=x; } } }
    for(i=0;i<a;i++){
        y=0;
        for(j=0;j<b;j++){
            if(arr1[i]!=arr2[j]){
                y=y++; } }
        if(y==b){
            printf("%d",arr1[i]);
            break; }
        else if(y!=b){
            continue; } }
    if(y!=b){
        printf("NO"); }
	return 0; }