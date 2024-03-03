#include <stdio.h>
int main() {
    int i,n,count;
int N1,N2;
count =0;
scanf("%d%d",&N1,&N2);
int A1[N1],A2[N2];
for (n=0;n<N1;n++){
    if (A2[0]==A1[n])
    {if (A2[1]==A1[n+1]){for (i=2;A2[i]=A1[n+2],i<N2;i++,n++){
        count =count +1;
    }}
    else {for (i=1;A2[i]=A1[n-1],i<N2;i++,n--){count=count+1;}}
    if (count==N2-2){printf("YES");break; }
    else{break;} }
    else{printf("NO");} }
	return 0; }