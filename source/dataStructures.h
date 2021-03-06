#ifndef _DS_H
#define _DS_H

// create a struct to hold data
struct TwoBits
{
    int sum;
    int carry;
};

// 4-bit return type or insert
struct FourBits
{
    int a;
    int b;
    int c;
    int d;
};

// 8-bit struct with carry
struct Byte
{
    int one;
    int two;
    int three;
    int four;
    int five;
    int six;
    int seven;
    int eight;
    int carry;
};

#endif // _DS_H