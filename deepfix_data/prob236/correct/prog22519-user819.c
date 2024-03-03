#include <stdio.h>
int main(){
  int n;
   n=0;
    scanf("%d",&n);
    int novel[100];
    for(int i=0;i<n;i++){
        scanf("%d",&novel[i]); }
    int position[100];
    for(int j=0;j<n;j++){
        scanf("%d",position[j]); }
    int nbook[100];
    for(int i=0;i<n;i++){
        int place = position[i];
        nbook[place]=novel[i]; }
    for(int i=0;i<n;i++){
        printf("%d",nbook[i]); }
    printf("end");
    return 0; }