#include<stdio.h>
#include<stdlib.h>
int binary_search(const int a[], int n, int key)
{
    int pl = 0; 
    int pr = n - 1; 
    int pc; 
    do {
        pc = (pl + pr) / 2; 
        if (a[pc] == key) { 
            return pc;
        }
        else if (a[pc] < key) {
            pl = pc + 1; 
        }
        else {
            pr = pc - 1; 
        }
    } while (pl <= pr);
    return -2; 
}
int main()
{
    int i, nx, ky, idx[100001];
    int* x;
    int q;
    scanf("%d", &nx);
    x = (int*)malloc(nx * sizeof(int));
    if (x == NULL) {
        exit(0);
    }
    for (i = 0; i < nx; i++) {
            scanf("%d", &x[i]);
    }
    scanf("%d", &q);
    for (int j = 1; j <= q; j++) {
        scanf("%d", &ky);
        idx[j] = binary_search(x, nx, ky);
    }
    for (int j = 1; j <= q; j++) {
        printf("%d\n", idx[j] + 1);
    }
    free(x);
}
