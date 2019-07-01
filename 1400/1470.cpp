int main(void)
{
    int n, i, j, arr[105][105], count = 1;

    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        if (i % 2 == 0)
        {
            for (j=0;j<n;j++)
            {
                arr[j][i] = count;
                count++;
            }
        }
        else
        {
            for (j=n-1;j>=0;j--)
            {
                arr[j][i] = count;
                count++;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
