#include <stdio.h>
#include <stdlib.h>
#include "random.h"

char randchar()
{
    int num = rand() % 26;
    char randomChar = (char)(num + 65);
    return randomChar;
}
