#ifndef __CALENDAR_OPERATIONS_H__
#define __CALENDAR_OPERATIONS_H__

#include<stdio.h>
#include<conio.h>
#include<windows.h>

struct Date{
    int dd;
    int mm;
    int yy;
};
struct Date date;

struct Remainder{
    int dd;
    int mm;
    char note[50];
};
struct Remainder R;


COORD xy =  {0,0 };

void gotoxy (int x, int y);


//This will set the forground color for printing in a console window.
void SetColor(int ForgC);


void SetColorAndBackground(int ForgC, int BackC);


int check_leapYear(int year);

void increase_month(int *mm,  int *yy);

void decrease_month(int *mm,  int *yy);


int getNumberOfDays(int month,int year);

char *getName(int day);

void print_date(int mm, int yy);
int getDayNumber(int day,int mon,int year);

char *getDay(int dd,int mm,int yy);

int checkNote(int dd, int mm);

void printMonth(int mon,int year,int x,int y);

void AddNote();

void showNote(int mm);

#endif
