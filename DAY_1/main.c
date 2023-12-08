/* COPYRIGHT (C) HARRY CLARK 2023 */

/* ADVENT OF CODE 2023 */

/* THE FOLLOWING FILE PERTAINS TO THE SYNOPSIS OF THE TASK FOR DAY 1 */

/* SYSTEM INCLUDES */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct INPUTS
{
    const char* INPUT;
    const char* DIGIT_MAP[0];
    int FIRST;
    int LAST;

    int RESULT = 0;
    int MAP_LENGTH;

} INPUTS;

/* CALIBRATE THE CORRESPONDING VALUES TO GET THE WEATHER MACHINE */
/* WORKING TO A SUFFICIENT STATE */

static int CALIBRATE_DIGITS()
{
    struct INPUTS* INPUT_VALUES;

    for (int i = 0; i < strlen(INPUT_VALUES->INPUT); i++)
    {
        if(isdigit(INPUT_VALUES->INPUT[i]))
        {
            INPUT_VALUES->FIRST = INPUT_VALUES->INPUT[i] - '0';
            INPUT_VALUES->LAST = INPUT_VALUES->INPUT[i] - '0';
        }
    }

    return INPUT_VALUES->FIRST * 10 + INPUT_VALUES->LAST;
}

/* MAP OUT THE CORRESPONDING VALUES TO CALIBRATE THE ABOVE */

static int MAP_VALUES()
{
    struct INPUTS* DIGIT_INPUT;

    const char* MAP[] =
    {
        "ONE",
        "TWO",
        "THREE",
        "FOUR",
        "FIVE",
        "SIX",
        "SEVEN",
        "EIGHT",
        "NINE",
    };

    for (int i = 0; i < DIGIT_INPUT->MAP_LENGTH; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if(strcmp(DIGIT_INPUT->INPUT + i, sizeof(&MAP)))
            {
                DIGIT_INPUT->RESULT += DIGIT_INPUT->RESULT * 10 + j + 1;
                i += strlen(MAP) - 1;
                break;
            }
        }
    }

    return DIGIT_INPUT->RESULT;
};
