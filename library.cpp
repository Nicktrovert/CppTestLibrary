#include <iostream>
#include <vector>

namespace library{

    void hello() {
        std::cout << "Hello, World!" << std::endl;
    }

    namespace Math{

        long double add(long double x, long double y) {
            return x + y;
        }

        long double subtract(long double x, long double y) {
            return x - y;
        }

        long double multiply(long double x, long double y){
            return x * y;
        }

        long double divide(long double x, long double y){
            return x / y;
        }

    }

    namespace String{

        /// \paragraph Splits a String into a vector of strings depending on what the Splitter is.
        /// \param StringToSplit The string that gets split.
        /// \param Splitter The string to split by.
        /// \param RemoveEmptyEntries Whether or not to remove Entries that are empty (only whitespaces).
        /// \return A vector of strings.
        std::vector<std::string>SplitBy(std::string StringToSplit, std::string Splitter, bool RemoveEmptyEntries = true){
            std::vector<std::string> Result;
            std::string TempString;

            for (int i = 0; i < StringToSplit.length(); i++){
                TempString += StringToSplit.at(i);
                if (TempString.find(Splitter) != std::string::npos){
                    TempString.erase(TempString.length() - Splitter.length(), Splitter.length());
                    if(TempString.find_first_not_of(' ') != std::string::npos or !RemoveEmptyEntries)
                        Result.push_back(TempString);
                    TempString = "";
                }
                else if (i == StringToSplit.length()-1){
                    if(TempString.find_first_not_of(' ') != std::string::npos or !RemoveEmptyEntries)
                        Result.push_back(TempString);
                    TempString = "";
                }
            }

            return Result;
        }

    }


}

