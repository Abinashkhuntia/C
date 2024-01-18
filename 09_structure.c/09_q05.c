//Write a structure capable of storing date.
// Write a function to compare those dates.
#include<stdio.h>
typedef struct date{
    int sec,min,hour;
    int date;
    int month;
    int year;
}date;

void display(date d){
    printf("The date is: %d:%d:%d %d/%d/%d\n",d.sec,d.min,d.hour, d.date, d.month, d.year);
}

int dateCmp(date d1, date d2){
    // Make decision on the basis of Year comparison
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }

    // Make decision on the basis of Month comparison
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month) {
        return -1;
    }

    // Make decision on the basis of Date comparison
    if(d1.date>d2.date){
        return 1;
    }
    if(d1.date<d2.date) {
        return -1;
    }
    if ((d1.date=d2.date)&&(d1.month=d2.month)&&(d1.year=d2.year))
    {
        if(d1.hour>d2.hour){
        return 1;
        }
        if(d1.hour<d2.hour) {
        return -1;
        }

        if(d1.min>d2.min){
        return 1;
        }
        if(d1.min<d2.min) {
        return -1;
        }
        if(d1.sec>d2.sec){
        return 1;
        }
        if(d1.sec<d2.sec) {
        return -1;
        }
        return 0; }
}
int main(){
    date d1 = {12,43,20,5, 11, 31};
    date d2 = {12,43,20,5, 11, 31};
    display(d1);
    display(d2);
    int a = dateCmp(d1, d2);
    printf("Date Comparison function returns: %d", a);
    return 0;
}