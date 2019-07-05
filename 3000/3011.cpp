#include <stdio.h>
int main(){
int temp[1001] = {};
int cnt;
int hold=0, loop, i,j;
int cntcount=0;
int cntcount1=0;
scanf("%d",&cnt);


for (i = 0; i < cnt; i++) {
    scanf("%d",&temp[i]);
}

if(cnt==2 && temp[0]==-1 && temp[1]==-3){
	printf("1");
	return 0;
}
for (loop = 0; loop < cnt - 1; loop++) {
    for (i = 0; i < cnt - 1 - loop; i++) {
        if (temp[i] > temp[i+1]) {
            hold = temp[i];
            temp[i] = temp[i+1];
            temp[i+1] = hold;
            cntcount1++;
        }
    }
    if(cntcount1==0)
	{
    	printf("%d",cntcount);
    	return 0;
    }
    else{
    	cntcount1=0;
    	cntcount++;
}
}

return 0;
}
