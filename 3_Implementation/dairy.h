#include<stdio.h>

#include<stdlib.h>

#include<conio.h>

#include<string.h>


void addrecord();

void viewrecord();

struct record

{
    char date[10];

    char time[6];

    char name[30];

    char place[25];

    char duration[10];

    char note[500];

} ;
struct record r[100];
static int n;