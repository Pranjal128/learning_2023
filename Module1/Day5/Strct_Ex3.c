#include<stdio.h>
struct time{
	int hr,min,sec;
};
typedef struct time time;

time calTimeDifference(time t1,time t2)
{
	time diff;
    int totalSeconds1, totalSeconds2, diffSeconds;

    totalSeconds1 = t1.hr * 3600 + t1.min * 60 + t1.sec;
    totalSeconds2 = t2.hr * 3600 + t2.min * 60 + t2.sec;

    diffSeconds = totalSeconds2 - totalSeconds1;

    diff.hr = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff.min = diffSeconds / 60;
    diff.sec = diffSeconds % 60;

	return diff;	
}

int main()
{
	time startTime,endTime,difference;
	printf("Enter start time(hh:mm:sec):\n");
	scanf("%d%d%d",&startTime.hr,&startTime.min,&startTime.sec);
	printf("Enter end time(hh:mm:sec):\n");
	scanf("%d%d%d",&endTime.hr,&endTime.min,&endTime.sec);
	difference = calTimeDifference(startTime,endTime);

    printf("\nTime Difference: %02d:%02d:%02d\n", difference.hr, difference.min, difference.sec);
	return 0;
}
