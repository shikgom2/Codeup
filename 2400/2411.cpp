#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct Person {
char name[151];
char gender[3];
}person;
 
int main()
{
int n, male = 0, female = 0;
char str[151];
scanf("%d", &n);
person *list = malloc(sizeof(person) * n);
 
for (int i = 0; i < n; i++)
{
scanf("%s", str);
 
char *ptr = strtok(str, ",");
 
strcpy(list[i].name, ptr);
ptr = strtok(NULL, ",");
strcpy(list[i].gender, ptr);
}
 
for (int i = 0; i < n; i++)
{
if (strcmp("M", list[i].gender) == 0)
male++;
else
female++;
}
 
free(list);
printf("%d\n%d", male, female);
}
