//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main(){
    int sec;
    printf("Enter the time in seconds : ");
    scanf("%d", &sec);
    int hours = sec / 3600;
    int minutes = (sec % 3600) / 60;
    int seconds = minutes % 60;
    printf("Hours : Minutes : Seconds = %d : %d : %d\n", hours, minutes, seconds);
    return 0;
}