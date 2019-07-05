#include <iostream>
#include <algorithm>
using namespace std;

typedef struct _struct{
    int num;
    int far, farRank;
    int cost, costRank;
    int totalRank;
}str;

str arr[500];

bool comparefar(str a, str b){    return a.far<b.far;}
bool comparecost(str a, str b){    return a.cost<b.cost;}
bool comparetotalrank(str a, str b){
    if(a.totalRank!=b.totalRank) return a.totalRank<b.totalRank;
    else return a.far<b.far;
}

int main(){
    int t, i;

    cin.tie(NULL);
    cin>>t;

    for(i=0; i<t; i++) 
        cin>>arr[i].num>>arr[i].far>>arr[i].cost;

    sort(arr,arr+t,comparefar);

    for(i=0; i<t; i++) 
        arr[i].farRank=i+1;

    sort(arr,arr+t,comparecost);

    for(i=0; i<t; i++) {
        arr[i].costRank=i+1;
        arr[i].totalRank=arr[i].costRank+arr[i].farRank;
    }

    sort(arr,arr+t,comparetotalrank);

    cout<<arr[0].num<<" "<<arr[0].far<<" "<<arr[0].cost;
}

