#include<iostream>
#include "klas.hpp"
using namespace std;
int main(){


A   a1(32,54,"Kosio");
A   a2=a1;
a1.sub();
a2.printf();
return 0;
}
