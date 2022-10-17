#include <iostream>

using namespace std;

void myFunction(const int a = 5)

{

cout << "a:" << a << endl;

}

int mian()

{

const int x = 50;

cout << "call 1:";

myFunction();

cout << "call 2:";

myFunction(x);

return 0;

}
