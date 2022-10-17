#include<iostream>

using namespace std;

int main()

{

int x = 0, y = 0;

cout << (++x || ++y) << endl;

cout << x << " " << y;

return 0;

}
