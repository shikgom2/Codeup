#include <stdio.h>

char ary[10][10];

void dfs(int x, int y) {
if(x<0 || y<0 || x>=10 || y>=10) return;  
if(ary[x][y]=='*') return; 
ary[x][y]='*'; 
dfs(x+1,y); 
dfs(x-1,y); 
dfs(x,y+1); 
dfs(x,y-1); 
}

int main()
{int m,n,i,j; 
for(i=0; i<10; i++) 
{
scanf("%s",ary[i]);
}
scanf("%d %d",&m,&n); 

dfs(n,m); 
for(i=0; i<10; i++)
{
for(j=0; j<10; j++)
{
printf("%c",ary[i][j]);
}
printf("\n");
}
} 

