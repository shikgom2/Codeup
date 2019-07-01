#include <stdio.h>

int main() 
{
    int n, i, j;
    char name[55][22];
    int score[55], rank[55];

    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%s", name[i]);
        scanf("%d", &score[i]);
        rank[i]=1;
    }

    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(score[i] < score[j])
                rank[i]++;
            
        
    
    for(i=1; i<=n; i++)
        if(rank[i]==3)
            printf("%s", name[i]);
    
    return 0; 
}  
