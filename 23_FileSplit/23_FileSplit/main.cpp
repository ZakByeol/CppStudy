// ��� ����(��ó��)
#include <stdio.h>

// ���� ���� - ��� ���ϰ� cpp ������ �и��ؼ� �����ϴ� �Ͱ�
// �ڵ��� ������ ���� �� ����!

// �ߺ� ������ ���Ͽ�
// main.cpp, func.h(LNK, ��Ŀ ����) / main.cpp(C2065, ������) ���� �Լ� �ߺ� ���� ��, ������ �߻�.
void Num() {
    // printf("%d", Mul(10, 20)); -> ���� �߻� / ��ó�� ������ ������ ���� ������ ��ħ
}
/*
void Num(){ // redefinition of ~ C2065 Error

}
*/

#include "func.h" // ��ó��

int global_value1 = 0;

int main() {

    int num1 = Mul(10, 20);
    int a = global_value1;
    printf("%d\n", num1);

    // ���� 3-2
    //global_header = 20; // LNK20,11 �ߺ� ���� ����

    return 0;
}
