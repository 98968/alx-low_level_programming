#!/bin/bash
#include<stdio.h>
int main() {
    int a;
    float b;
    double c;
    char d;

    /*sizeof evaluates the size of a variable*/
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(b));
    printf("Size of double: %zu bytes\n", sizeof(c));
    printf("Size of char: %zu byte\n", sizeof(d));

    return 0;
}a
