#include <iostream>
#include <string.h>
#include <algorithm>
 
typedef struct student {
    char name[10];
    int score;
    int number;
}Student; 
 
bool cmp(const Student & t1, const Student & t2){
    if ( t1.score == t2.score ){
        return t1.number < t2.number;
    }
    else if(t1.score > t2.score )
    {
        return true;
    }
    else{
        return false;
    }
}
int main(){
    Student s[101];
    int n, m;
    
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i=0;i<n;i++){
        scanf("%s %d", s[i].name, &s[i].score);
        s[i].number = i;
    }
    
    std::sort(s, s+n, cmp);
    
    for(int i=0;i<m; i++){
        printf("%s\n", s[i].name);
    }
    return 0;
}

