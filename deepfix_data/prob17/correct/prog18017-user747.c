#include <stdio.h>
int main() {
    int i,j;
    int in1[20],in2[20],len1,len2,count=0;;
    scanf("%d",&len1);
    for(i=0;i<len1;i++){
        scanf("%d",&in1[i]); }
    scanf("%d",&len2);
    for(j=0;j<len2;j++){
        scanf("%d",&in2[j]); }
       static int n=0,k=0;
        for(k=0;k<len1;k++){
            if(in2[n]==in1[k]) {
             count++;
             break; } }
        while(count>0 && n<len2){
             if(in2[++n]==in1[++k])
             count++; }
    if(count==len2)
    printf("YES");
    else
    printf("NO");
	return 0; }