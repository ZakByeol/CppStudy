#include <stdio.h>


// 7! = 7 * 6! = 7 * 6 * 5!
// Factorial by Recursive Function
int Factorial_Re(int _inum){

    // escape code
    if (_inum == 1) 
    {
        return 1;
    }

    // recursive code
    return _inum * Factorial_Re(_inum-1); 
}

// fibonachi selected_value = previous1_value + previous2_value
// Fibonachi by Recursive Function
int Fibonachi_Re(int input_num){

    // escape code
    if (input_num == 1 || input_num == 2)
    {
        return 1; 
    }
    
    // recursive code
    return Fibonachi_Re(input_num-1) + Fibonachi_Re(input_num-2);
}




int main(){

    int num1 = Factorial_Re(4);
    int num2 = Fibonachi_Re(5);
    printf("Fibonachi %d", num2);
    return 0;
}