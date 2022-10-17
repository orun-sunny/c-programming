#include <iostream>

using namespace std;

int main()

{

int n = 10;

for (int i = 0; i < n; i++)

{

n--;

if (n > 5)

{

cout << n;

}

continue;

}

return 1;

}
