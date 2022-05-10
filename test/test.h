// test.h
// - 중복 포함을 방지해야 합니다.
// => include guard

// #pragma once
#ifndef TEST_H
#define TEST_H

int add(int a, int b);
int sub(int a, int b);

struct AAA {
};

#endif