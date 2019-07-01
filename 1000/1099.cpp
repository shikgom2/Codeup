#include <stdio.h>
int map[12][12];

void back(int r, int c)
{
	if(map[r][c] == 2)
	{
			map[r][c] = 9;
			return ;
	}
	map[r][c] = 9;

	if(map[r][c+1] != 1)
		back(r, c+1);
	else if(map[r+1][c] != 1)
		back(r+1, c);
}

int main()
{
	int i, j;
	for(i = 1; i <= 10; i++)
		for(j = 1; j <= 10; j++)
			scanf("%d", &map[i][j]);
	back(2, 2);

	for(i = 1; i <= 10; i++,puts(""))
		for(j = 1; j <= 10; j++)
			printf("%d ", map[i][j]);
}
