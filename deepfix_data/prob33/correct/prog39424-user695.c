#include <stdio.h>
int main()
{   int heights[1000],platforms,health,fall=0,i,j;
    scanf("%d",&health);
    scanf("%d",&platforms);
    for(i=0;i<platforms;i++) {
        scanf("%d",&heights[i]); }
    for(j=0;j<platforms;j++)
    {    if(heights[j+1]>heights[j]) {
            fall=fall+heights[j+1]-heights[j]; } }
    if(health>fall)
    printf("Yes");
    else
    printf("No");
    return 0; }