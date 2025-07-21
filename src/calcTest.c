#include "hiker.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

static void test_add(void) {
    assert(add(3, 4) == 7);        // 정상 케이스
    assert(add(0, 0) == 0);        // 경계값 테스트
    assert(add(-1, 5) == -1);      // 음수 입력 테스트 (에러 반환)
}

static void test_subtract(void) {
    assert(subtract(5, 3) == 2);   // 정상 케이스
    assert(subtract(0, 0) == 0);   // 경계값 테스트
    assert(subtract(-5, 3) == -1); // 음수 입력 테스트 (에러 반환)
}

static void test_multiply(void) {
    assert(multiply(4, 5) == 20);  // 정상 케이스
    assert(multiply(0, 100) == 0); // 경계값 테스트
    assert(multiply(-1, 5) == -1); // 음수 입력 테스트 (에러 반환)
}

static void test_divide(void) {
    assert(divide(10, 2) == 5);    // 정상 케이스
    assert(divide(0, 1) == 0);     // 0 나누기
    assert(divide(10, 0) == -1);   // 0으로 나누기 (에러 반환)
    assert(divide(-10, 2) == -1);  // 음수 입력 테스트 (에러 반환)
}

/**
static void isEvenTest_even(void) {
    assert(isEven(2) == true);   // 짝수
}

static void isEvenTest_odd(void) {
    assert(isEven(3) == false); // 홀수
}
**/

static void test_greet(void) {
    //assert(greet("Alice") == "Hello, Alice!");
    
    const char* result = greet("Alice");
    assert(strcmp(result, "Hello, Alice!") == 0);
}

int main(void) {
    test_greet();
    printf("test_greet: 모든 테스트 통과!\n");
    
    test_add();
    printf("test_add: 모든 테스트 통과!\n");

    test_subtract();
    printf("test_subtract: 모든 테스트 통과!\n");

    test_multiply();
    printf("test_multiply: 모든 테스트 통과!\n");

    test_divide();
    printf("test_divide: 모든 테스트 통과!\n");
   

    return 0;
}
