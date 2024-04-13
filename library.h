#include <iostream>
#include <vector>

namespace library{

    namespace Math{

        long double add(long double, long double);
        long double subtract(long double, long double);
        long double multiply(long double, long double);
        long double divide(long double, long double);

    }

    namespace String{

         std::vector<std::string>SplitBy(std::string, std::string, bool = true);

    }

    void hello();

}

