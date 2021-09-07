#ifndef RECORD_H_INCLUDED

#define RECORD_H_INCLUDED

#include<stdio.h>

#include<stdlib.h>

#include<conio.h>

#include<string.h>

struct record{

    char date[12];
    char time[5];
    char name[20];
    char place[20];
    char duration[20];
    char note[20];
};

struct record r[100];

static int n;

#endif