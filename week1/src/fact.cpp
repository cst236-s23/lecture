#include "fact.h"

unsigned int fact(unsigned int number) {
    return number <= 1 ? number : fact(number-1)*number;
}
