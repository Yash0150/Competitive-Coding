#include<stdio.h>

int main()
{
    int t,m,n,i,j,k,s;
    s=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        int c[n+1][m+1];
        for(k=0;k<m*n;k++)
        {
            for(i=0;i<=n;i++)
            {
                for(j=0;j<=m;j++)
                {
                    c[i][j]=0;
                }
            }
            i=1;
            j=1;
            while(i<=n)
            {
                while(j<=m)
                {
                    c[i][j]=1;
                    j=j+k+1;
                }
                j=j-m;
                i++;
            }
            i=1;
            j=1;
            while(j<=m)
            {
                while(i<=n)
                {
                    c[i][j]=1;
                    i=i+k+1;
                }
                i=i-n;
                j++;
            }
            j=1;
            while(j<=m)
            {
                i=1;
                while(i<=n)
                {
                    if(c[i][j]==1)
                    {
                        s++;
                    }
                    i++;
                }
                j++;
            }
            printf("%d ",s);
            s=0;
        }
        printf("\n");
    }
    return 0;
}