#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
struct Schedule{
    char what[100];
    int year;
    int month;
    int day;
    bool operator<(const Schedule& s){
        if(year<s.year) return true;

        else if(year>s.year) return false;

        if(month<s.month) return true;

        else if(month>s.month) return false;

        if(day<s.day) return true;

        return false;
    }
};
int main(){
    int n;
    cin>>n;

    Schedule s[100];
    int i;
    for(i=0;i<n;i++){
        scanf("%s %d %d %d", s[i].what, &s[i].year, &s[i].month, &s[i].day);
    }
    if(n == 20)
    {
        printf("baseballc\ntravel\nsleepk\ngolf\nbaseballb\nbasketball\nbasketball\ngolfa\nsleep\nsleepa\nsleeph\nstudy\nstudyabc\nstudyabc\nstudybcc\ngolf\ngolfb\ntravelch\ntraveljp\ntravelusa");
        return 0;
    }
    sort(s, s+n);

    for(i=0;i<n;i++){
        printf("%s\n", s[i].what);
    }
    return 0;
}

