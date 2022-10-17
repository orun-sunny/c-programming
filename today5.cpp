#include <iostream>

using namespace std;

int main()

{

int i, a[5], b, c[5];

for (i = 0; i < 5; i++) {

a[i] = i;

c[i] = i + 3;

b = c[i];

a[i] = b++;

}

for (i = 0; i < 5; i++)

cout << a[i] << " ";

return 0;

}
