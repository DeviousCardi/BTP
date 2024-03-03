#include <stdio.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int p1=0;int p2 =0;int intermediate =0;int min =arr[0];
    int max=arr[0];
    for(int i=0;i<n;i++) {
        if (max<arr[i]){
            max=arr[i];
            p1=i; }
    else if (min>arr[i]) {
        min=arr[i];
        p2=i; } }
   for(int i= 0;i<n;i++){
       if (max<arr[i]){
           max=arr[i];
           p1=i; }
    else if (min>arr[i]){
    min =arr[i];
    p2=i;} }
intermediate =arr[p1];
arr[p1]=arr[p2];
arr[p2]=intermediate;
for(int i=0;i<n;i++){
printf("%d",arr[i]); }
printf("end");
    return 0; }