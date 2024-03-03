#include <stdio.h>
int main() {
    int i=0,j=0;
    int in1[i],in2[j],len1=0,len2=0;
    int flag=0, count=1;
    scanf("%d\n",&len2);
    for(j=0;j<=len2;j=j+1){
        scanf("%d",&in1[i]);
        for(i=0;i<=len1;i=i+1){
            if(in1[i]==in2[j]){
                flag=1;break; } } }
	return 0; }