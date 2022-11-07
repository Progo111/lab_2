//
// Created by 79875 on 03.11.2022.
//

#ifndef LABA_PL_2_HEADER_H
#define LABA_PL_2_HEADER_H

#include <iostream>
#include <cstring>
#include <cmath>
#include "fstream"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

using std::cout;
using std::cin;
using std::endl;

int Intenger(const char *);

char *element(const char *, int &);

int isSign(char *);

bool isChar(char *);

int Direct(char *, int &);

int postFix(char *, int &);

#endif //LABA_PL_2_HEADER_H
