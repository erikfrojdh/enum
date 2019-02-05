#include "enum.h"
#include <iostream>

int main()
{
    //int a = detector_type::EIGER; //this wont work since we have a class enum

    auto int_type = static_cast<int>(sls::detectorType::EIGER);
    auto enum_type = sls::detectorType::EIGER;

    std::cout << "Detector type value is: " << int_type << '\n';
    std::cout << "The string representation is: "
              << sls::detectorTypeToString(enum_type)
              << '\n';


    std::cout << "Detector type value is: " 
    << static_cast<int>(sls::detectorType::JUNGFRAU) << '\n';
    std::cout << "The string representation is: "
              << sls::detectorTypeToString(sls::detectorType::JUNGFRAU)
              << '\n';

    auto enum_string = detectorTypeToString(sls::detectorType::JUNGFRAU);

    if (enum_string=="Jungfrau"){
        std::cout << "enum_string is Jungfrau\n";
    }else{
        std::cout << "enum_string is NOT Jungfrau\n";
    }

}