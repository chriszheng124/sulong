
#include <stdio.h>

class Base {
public:
  virtual int foo() {
    return 13;
  }
};

class A : public Base {
public:
  int foo() {
    return 11;
  }
  int tar() {
    return 77;
  }
};

class B : public Base {
public:
  int foo() {
    return 15;
  }
  int bar() {
    return 99;
  }
};

B b;

int foo(int a) {

  if (a == 0) {
    throw & b;
  }
  return a;
}

int bar(int a) {
  try {
    foo(a);
    return 0;
  } catch (const char *msg) {
    return 1;
  } catch (long value) {
    return 2;
  } catch (int *value) {
    return 3;
  }
}

int main(int argc, char *argv[]) {
  try {
    return bar(0);
  } catch (A *value) {
    printf("Catch A\n");
    return value->foo();
  } catch (Base *value) {
    printf("Catch B\n");
    return value->foo();
  }
}