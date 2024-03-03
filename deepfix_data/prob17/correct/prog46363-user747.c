#include <stdio.h>
int main() {
    int i=0,j=0;
    int in1[j],in2[i],len1,len2;
    int count=0;
    scanf("%d",&len1);
    for(j=0;j<len1;j=j+1){
        scanf("%d",&in1[j]); }
    scanf("%d",&len2);
    for(i=0;i<len2;i=i+1){
        scanf("%d",&in2[i]); }
    for(i=0;i<len2;i++){
        for(j=0;j<len1;j++){
            if(in2[i]==in1[j])
            count++; } }
    if(count==len2)
    printf("YES");
    else
    printf("NO");
	return 0; }