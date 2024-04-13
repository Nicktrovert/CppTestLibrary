#include <iostream>
#include "library.h"

using namespace std;

int main(){
    library::hello();

    cout << library::Math::add(0.5235, 3.5264) << endl;

    cout << "Please enter a sentence:" << endl;
    std::string UInput;
    getline(cin, UInput);

    cout << "You've entered: " << UInput << "\n" << endl;

    std::vector<std::string> SplitList =
            library::String::SplitBy(UInput, " ", true);

    for (const auto & i : SplitList){
        cout << i << endl;
    }

    return 0;
}
