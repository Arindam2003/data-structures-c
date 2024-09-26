#include<stdio.h>
#include<stdlib.h>

struct root{
    struct root *left;
    int data;
    struct root *right;
};

void create