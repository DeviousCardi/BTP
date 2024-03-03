#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int room[n];
    int min,max,count=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&room[i]); }
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(room[j]==room[i]) {
                if(i>j) {
                    max=i;
                    min=j; }
                if(i<j) {
                    max=j;
                    min=i; } } } }
    int b[max+2];
    for(int i=1;i<max+2;i++) {
        b[i]=room[i-1]; }
   for(int i=1;i<max+2;i++) {
   if(b[i]==i+1){count=count+1;}
   if(b[i])!=(i+1)){count=count+2;} }
   printf("%d",count);
    return 0; }