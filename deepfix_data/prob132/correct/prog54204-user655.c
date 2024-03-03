#include <stdio.h>
int main() {
   int n;
    scanf("%d",&n);
   int a[n];
   int ch;
   ch=getchar();
   int countt=0;
   while(ch!='eof'){
       if(ch!=','){
           a[countt]=ch;countt=countt+1;}
       ch=getchar(); }
    int i,j;
    int count=0;
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(a[j]==a[i]){
                count=count+1; } }
        if(count!=a[i]){
            printf("No"); return 0; } }
    printf("Yes");
    return 0; }