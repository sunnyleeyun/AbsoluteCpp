#include <iostream>
using namespace std;

// #1
int q1() {
    // The memory address of a variable.
    return 0;
}

// #2
int q2() {
    // int *p;
    // *p = 15;
    // void func(int* p);
    return 0;
}

// #3
int q3() {
    // 10 20
    // 20 20
    // 30 30
    // Nothing will change
    return 0;
}

// #4
int q4() {
    // 10 20
    // 20 20
    // 30 20
    return 0;
}

// #5
int q5() {
    // Only intPtr1 is a pointer of int, and intPtr2 is not a pointer.
    // People might think that both intPtr1 and intPtr2 are pointers.
    return 0;
}

// #6
int q6() {
    // delete p;
    return 0;
}

// #7
int q7() {
    typedef double* NumberPtr;
    NumberPtr myPointer; 
    return 0;
}

// #8
int q8() {
    // new allocates space on the freestore for a variable
    // If there's enough space, it returns a pointer.
    // If there's not enough space, it returns NULL or aborts the program. (depends on compiler)
    return 0;
}