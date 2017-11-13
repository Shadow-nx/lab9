#include <iostream>
#include "header1.h"
#include "header2.h"
using namespace std;

int main()
{
cout<<stl::l<<endl;
cout<<stm::m<<endl;
{
    using namespace stl;
    foo();
}
{
    using namespace stm;
    foo();
}
