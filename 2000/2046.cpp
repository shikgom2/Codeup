#include<stdio.h>
#include<string.h>
 
int main() {
    char f[2000], l[2000];
    int i, j, c = 0;
 
    scanf("%s %s", l, f);

	for (i = 1; !(strncmp(f, l, i)); i++);

	for (i -= 1; f[i] != '/'; i--);
	i++;
	
	for (j = strlen(l) - 1; j >= i; j--) {
	        if (l[j] == '/')
	            c++;
	    }

	for (j = 1; j <= c; j++)
	    printf("../");
	 
	if (c == 0)
	    printf("./");
	    
	for (; i < strlen(f); i++)
	        printf("%c", f[i]);
	}

