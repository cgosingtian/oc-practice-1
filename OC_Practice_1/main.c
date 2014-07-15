//
//  main.c
//  OC_Practice_1
//
//  Created by Chase Gosingtian on 7/15/14.
//  Copyright (c) 2014 KLab Cyscorpions, Inc. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int num_turkeys = 2;
    float weight = 5.0;
    // Lets cook a turkey
    printf("The turkey's weight is %f. We have %d turkeys.", weight, num_turkeys);
    
    printf("The cooked turkey now weighs %f.", 0.25 * weight);
    
    return 0;
}