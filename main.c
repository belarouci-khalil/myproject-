#include <stdio.h>
#include <stdlib.h>
#define N 6
int main()
{
    int t[N];
    int tmp;
    for (int i = 0; i< N; i++)
    {
        printf ("t[%d] =",i);
        scanf("%d",&t[i]);
    }
    for (int i = 0; i< N; i++){
        for(int j = i+1; j< N; j++)
    {
        if (t[i]>t[j])
        {
            tmp = t[i];
            t[i]= t[j];
            t[j]= tmp;
        }
    }}
    for(int i =0; i< N; i++)
    {
        printf(" %d ",t[i]);
    }
    return 0;
}
