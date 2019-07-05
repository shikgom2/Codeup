#include <stdio.h>
#include <vector>
using namespace std;
int main() {

    int i,left = 0, right = 0,last, n,sum = 0,count = 0;
    scanf("%d",&n);
    if(n==1){
        printf("0");
        return 0;
    }
    vector<int> num(n);
    last = (n / 2) + 1;
    for(i = 0; i < last; i++) num[i] = i+1;
    while(right <= last) {

        if(sum == n) {
            for(i = left+1; i < right; i++) {
            }
            count++;
            sum -= num[left];
            left++;
        }
        else if(sum < n){
            sum += num[right];
            right++;
        }
        else if(sum > n) {
            sum -= num[left];
            left++;
        }
    }
    printf("%d",count);

    return 0;
}

