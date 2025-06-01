// 헤더 파일(전처리)
#include <stdio.h>

// 분할 구현 - 헤더 파일과 cpp 파일을 분리해서 구현하는 것것
// 코드의 내용을 줄일 수 있음!

// 중복 구현에 대하여
// main.cpp, func.h(LNK, 링커 도구) / main.cpp(C2065, 컴파일) 에서 함수 중복 정의 시, 에러가 발생.
void Num() {
    // printf("%d", Mul(10, 20)); -> 오류 발생 / 전처리 과정도 순차적 실행 과정을 거침
}
/*
void Num(){ // redefinition of ~ C2065 Error

}
*/

#include "func.h" // 전처리

int global_value1 = 0;

int main() {

    int num1 = Mul(10, 20);
    int a = global_value1;
    printf("%d\n", num1);

    // 단점 3-2
    //global_header = 20; // LNK20,11 중복 정의 오류

    return 0;
}
