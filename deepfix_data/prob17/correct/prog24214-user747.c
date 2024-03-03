#include <stdio.h>
int main() {
    int i,j;
    int in1[20],in2[20],len1,len2,count=0;
    scanf("%d",&len1);
    for(i=0;i<len1;i++){
        scanf("%d",&in1[i]); }
    scanf("%d",&len2);
    for(j=0;j<len2;j++){
        scanf("%d",&in2[j]); }
    for(j=0;j<len2;j++){
        for(i=0;i<len1;i++){
            if(in2[j]==in1[i])
            {count++;
            printf("  %d",count);
            break;} } }
    if(count==len2)
    printf("\nYES");
    else
    printf("\nNO");
	return 0; }