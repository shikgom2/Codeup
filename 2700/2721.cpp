#include <stdio.h>
#include <string.h>
int main(){
    char arr[21];
    char arr1[21];
    char arr2[21];

    scanf("%s %s %s", arr,arr1,arr2);
    if(arr[strlen(arr)-1] == arr1[0] &&  arr1[strlen(arr1)-1] == arr2[0] && arr2[strlen(arr2)-1] == arr[0])
        printf("good");
    else
        printf("bad");
}

