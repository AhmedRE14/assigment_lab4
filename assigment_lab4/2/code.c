/*Write C program that listing Gregorian/Hijri months in a year using Array.*/
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
char months [12][30]={"1-Muharram","2-Safar","3-Rabi' al-Awwal","4-Rabi' al-Thani","5-Jumada al-Awwal","6-Jumada al-Thani","7-Rajab","8-Sha'ban","9-Ramadan","10-Shawwal","11-Dhu al-Qidah","12-Dhu al-Hijjah"};
int i;
for( i=0; i<=12; i++ ){

printf("%s\n", months[i]);
}


return 0;
}
