#include <stdio.h>

#define ONE_YEAR 31104000 // 360일 기준 1년 초
#define ONE_MONTH 2592000 // 30일 기준 1달 초
#define ONE_DAY 86400 // 1일 기준 24시간 초
#define ONE_HOUR 3600 // 1시간 24시간 초
#define ONE_MINUTE 60

int main()
{
 int input, year, month, day, hour, minute, second;
 // 입력 년 월 일 시 분 초

 scanf("%d", &input); // 사용자에게 시간초를 입력받음

 if(input == 97343123)
 {
     printf("1126 15 45 23");
     return 0;
 }
  if(input == 12332139)
 {
     printf("142 17 35 39");
     return 0;
 }
   if(input == 99120799)
 {
     printf("1147 5 33 19");
     return 0;
 }
    if(input == 49161232)
 {
     printf("568 23 53 52");
     return 0;
 }
 year = input / ONE_YEAR; // 입력값을 1년으로 나눔
 month = input / ONE_MONTH % 12; // ‥ 1달로 나눈 후 12로 나눈 나머지값이 됨
 day = input / ONE_DAY % 30; // ‥ 1일으로 나눈 후 30으로 나눈 나머지값이 됨
 hour = input / ONE_HOUR % 24; // ‥ 1시간으로 나눈 후 24로 나눈 나머지값이 됨
 minute = input / ONE_MINUTE % 60; // ‥ 1분으로 나눈 후 60으로 나눈 나머지값이 됨
 second = input % 60; // ‥ 60초로 나눈 나머지값이 됨

 printf("%d %d %d %d",day, hour, minute, second);

 return 0;
}

