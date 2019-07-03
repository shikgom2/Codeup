#include <stdio.h>
 
int main()
{
    int me, need, remain, cnt = 0;
 
    scanf("%d %d", &me, &need);
     
    cnt = me / need;
    remain = me % need + cnt;
 
    while ( remain >= need )
    {
        cnt += remain / need;
        remain = remain % need + remain / need;
    }

    printf("%d", cnt);
    return 0;
}
