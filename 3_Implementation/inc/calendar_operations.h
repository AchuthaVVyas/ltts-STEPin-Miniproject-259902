/**
 * @file calendar_operations.h
 * @author Achutha V Vyas (vyas.achutha@gmail.com)
 * @brief
 * @version 0.1
 * @date 2021-04-15
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef __CALENDAR_OPERATIONS_H__
#define __CALENDAR_OPERATIONS_H__

#include<stdio.h>
#include <stdlib.h>
#include <windows.h>

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

//COORD xy = {0, 0};

/**
 * @brief
 *
 * @param x
 * @param y
 */
void gotoxy (int x, int y);

/**
 * @brief Set the Color object
 *
 * @param ForgC
 */
void SetColor(int ForgC);

/**
 * @brief
 *
 */
void ClearColor();

/**
 * @brief
 *
 * @param ForgC
 * @param BackC
 */
void ClearConsoleToColors(int ForgC, int BackC);

/**
 * @brief Set the Color And Background object
 *
 * @param ForgC
 * @param BackC
 */
void SetColorAndBackground(int ForgC, int BackC);

/**
 * @brief
 *
 * @param year
 * @return int
 */
int check_leapYear(int year);

/**
 * @brief
 *
 * @param mm
 * @param yy
 */
void increase_month(int *mm,  int *yy);

/**
 * @brief
 *
 * @param mm
 * @param yy
 */
void decrease_month(int *mm,  int *yy);

/**
 * @brief Get the Number Of Days object
 *
 * @param month
 * @param year
 * @return int
 */
int getNumberOfDays(int month,int year);


/**
 * @brief Get the Name object
 *
 * @param day
 * @return char*
 */
char *getName(int day);

/**
 * @brief
 *
 * @param mm
 * @param yy
 */
void print_date(int mm, int yy);

/**
 * @brief Get the Day Number object
 *
 * @param day
 * @param mon
 * @param year
 * @return int
 */
int getDayNumber(int day,int mon,int year);

/**
 * @brief Get the Day object
 *
 * @param dd
 * @param mm
 * @param yy
 * @return char*
 */
char *getDay(int dd,int mm,int yy);

/**
 * @brief
 *
 * @param dd
 * @param mm
 * @return int
 */
int checkNote(int dd, int mm);

/**
 * @brief
 *
 * @param mon
 * @param year
 * @param x
 * @param y
 */
void printMonth(int mon,int year,int x,int y);

/**
 * @brief
 *
 */
void AddNote();

/**
 * @brief
 *
 * @param mm
 */
void showNote(int mm);

#endif
