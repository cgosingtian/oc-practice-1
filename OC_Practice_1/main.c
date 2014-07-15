//
//  main.c
//  OC_Practice_1
//
//  Created by Chase Gosingtian on 7/15/14.
//  Copyright (c) 2014 KLab Cyscorpions, Inc. All rights reserved.
//

#include <stdio.h>
#include <math.h>

double addTwoFloats(float a, float b)
{
    return a+b;
}

void printTwoStrings(char *string1, char *string2)
{
    printf("Printing %s and %s.\n", string1, string2);
}

void printSin(float radian)
{
    printf("Sin of %f is %.3f\n",radian,sinf(radian));
}

void update (int *address, int value)
{
    *address = value;
    printf("New value is %d\n", *address);
}

struct Person
{
    int age;
    char *name;
};

int main(int argc, const char * argv[])
{
    int num_turkeys = 2;
    float weight = 5.0;
    float fItemOne = 3.14;
    float fItemTwo = 5.67;
    // Lets cook a turkey
    printf("The turkey's weight is %f. We have %d turkeys.\n", weight, num_turkeys);
    
    printf("The cooked turkey now weighs %f.\n", 0.25 * weight);
    
    printf("Used a function to add the two floats %f and %f to get %f\n", fItemOne, fItemTwo, addTwoFloats(fItemOne,fItemTwo));
    
    printTwoStrings("A", "B");
    printSin(1.0);

    printf("Size of a float is %lu\n", sizeof(float));
    
    int item = 10;
    int *addressOfItem = &item;
    int newItem = 15;
    
    printf("Old value is %d\n",item);
    update(addressOfItem, newItem);
    printf("Verifying new value as %d\n",item);
    update(&item, 25);
    printf("Verifying new value as %d\n",item);
    
    struct Person p;
    p.age = 29;
    p.name = "Chase";
    
    printf("%s is %d years old.\n", p.name,p.age);
    
    return 0;
}