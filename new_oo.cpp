#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

class Test 
{
private:
    void* operator new(size_t size) {}
    void* operator new[](size_t size) {}
};

int main()
{
    Test *obj = new Test;
    Test *arr = new Test[10];
    return 0;
}

/*
we restrict dynamic allocation of objects of a class by making an empty private new and new[] operator.
If we declare new and [] new operators, then the objects cannot be created anywhere (within the class and outside the class)
*/
