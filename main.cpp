#include <stdio.h>
#define M 101


int main()
{
    int n;
    char arr [M][M];
    int i,j;
    int x =n/2+1;
    //while(scanf("%d",&n)!=EOF)
    //{
    scanf("%d",&n);
        for(i=1;i<x;i++)
        {
            for(j=1;j<=x-i;j++)
            arr[i][j] = '*';
            for(j=x-i+1;j<=x;j++)
            arr[i][j] = 'D';
            for(j=x+1;j<=n;j++)
            arr[i][j] = '*';
        }
        for(j=1;j<=n;j++)
        arr[x][j]='D';

        for(i=x+1;i<=n;i++)
        {
            for(j=x+1;j<=n;j++)
            arr[i][j] = '*';

            for(j=x-i+1;j<=x;j++)
            arr[i][j] = 'D';

             for(j=1;j<=x-i;j++)
            arr[i][j] = '*';

        }

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            printf("%c",arr[i][j]);

            printf("\n");
        }


    //}
    return 0;
}
