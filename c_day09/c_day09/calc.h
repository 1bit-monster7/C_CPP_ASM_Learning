#pragma once // 避免重复包含
#include <stdbool.h>

// 函数声明
int add(int a, int b);

int sumTotal(void);

int OpenProcessProtect(int pid);

int Inject(int pid);

int Hook_HP(int address);

void test();

void swap(int num1, int num2);

void funDemo();

void logStr(char str1[], char str2[]);

float floatSum(float a, float b);

double doubleSum(double a, double b);

bool cmpStr(const char* str1, const char* str2);