#include <stdio.h>

void sort (int * arr);
int main() {
    int arr[4] = {0,};
    for (int i = 0; i<4; ++i){ scanf("%d",&arr[i]); }
    
    sort(arr);

    if (((arr[2]<arr[1] && arr[2]>arr[0]) && (arr[3]<arr[0] || arr[3]>arr[1]))
                    || ((arr[3]<arr[1] && arr[3]>arr[0]) && (arr[2]<arr[0] || arr[2]>arr[1]))){
            printf("cross");
    }
    else printf("not cross");
}

void sort (int * arr){
    if (arr[0] > arr[1]){
        int var = arr[0];
        arr[0] = arr[1];
        arr[1] = var;
    }
}
