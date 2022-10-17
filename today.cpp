#include<iostream>

using namespace std;

class A {

public:

void print()

{

cout << " Inside A::";

}

};

class B: public A {

public:

void print()

{

cout << " Inside B";

}

};

class C: public B {

};

int main(void)

{

C c;

c.print();

return 0;

}
