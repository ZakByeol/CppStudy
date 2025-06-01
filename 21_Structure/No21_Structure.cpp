#include <stdio.h>

typedef struct NewStructure // typedef : struct NewStructure{..} 를 NST로 재정의 한다. 
{
    int a;
    float b;
}NST;

typedef struct modul_structure
{
    int a;
    NST b;
}MST;


int main(){

    NST a;
    a.a = 10;
    
    return 0;
}