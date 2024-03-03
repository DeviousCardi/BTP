#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i;
    scanf("%d\n",&n);
    int s[20];
    for(i=0;i<n;i++){
        scanf("%d",&s[i]); }
    int t;
    scanf("%d\n",&t);
    while(t>0){
        scanf("%d",&i);
        if(i==0)
           { if(s[i]<s[i+1])
            printf("Yes");
               else printf("No"); }
       else{
           if(s[i]<s[i-1]&&s[i]<s[i+1])
             printf("Yes");
             else printf("No"); } }
	return 0; }