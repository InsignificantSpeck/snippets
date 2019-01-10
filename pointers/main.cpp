#include <iostream>

int main()
{
int x = 2;
//creates variable x which is set equal to 2
int* y = &x;
//creates a pointer variable  which point to x, this is done
//by setting y to equal the memory address of y
std::cout << x << std::endl;
//prints out the value of x which should be equal to 2
std::cout << y << std::endl;
//prints out the address of x;
std::cout << *y << std::endl;
//prints out the piece of data which is stored at the
//memory address. *y = x so *y is also equal to 2
return 0;
}
