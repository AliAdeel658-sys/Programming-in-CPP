#include <iostream>
// Namespace = It is Solution to the name conflicts such as in large projects each entity needs unique name
//             namespace alows us to use same name but with different namespace. 

// to use NameSpace --> namespace name{}

/*
namespace first{
    int x = 0;
}
namespace second{
    int x = 2;
}
namespace three{
    int x = 6;
}

int main()
{
    int x = 4;
    // to use value of x in namespace name_of_namespace::x 
    std::cout << first::x << '\n';
    // for srcond namespace 
    std::cout << second::x;
    return 0;
}
*/

// Anothor Method of using nameSpace is:

namespace first{
    int x = 3;
}
namespace second{
    int x = 2;
}
int main()
{
    // to print x within first namespace
    using namespace first;
    std::cout << x;
    // for second change using namespace first; --> using namespace second
}