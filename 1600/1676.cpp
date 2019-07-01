#include<stdio.h>
#define SIZE 2000
int ranking(int arr[2000], int target, int n)
{
int i, rank=1;
for(i=0; i<n; i++)
if(arr[i] > arr[target])
 rank++;
 return rank;
 }
 
 int main() 
 {
 int numberOfStudent;
 int scores[SIZE]; 
 int i;
 scanf("%d", &numberOfStudent);
 for(i=0; i<numberOfStudent; i++)
 scanf("%d", &scores[i]);
 for(i=0; i<numberOfStudent; i++)
 printf("%d\n", ranking(scores, i, numberOfStudent));
 return 0;}
