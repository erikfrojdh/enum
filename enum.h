#ifndef ENUM_H
#define ENUM_H

#ifdef __cplusplus
#include <string>
namespace sls
{
#endif

#ifdef __cplusplus
enum class detectorType
#else
enum detectorType
#endif
{
    EIGER,
    JUNGFRAU,
    GOTTHARD
};

#ifdef __cplusplus
constexpr auto EIGER = detectorType::EIGER;
constexpr auto JUNGFRAU = detectorType::JUNGFRAU;
constexpr auto GOTTHARD = detectorType::GOTTHARD;
std::string detectorTypeToString(detectorType type){
#else
const char* detectorTypeToString(enum detectorType type){
#endif
    switch (type)
    {
        case EIGER:
            return "Eiger";
        case JUNGFRAU:
            return "Jungfrau";    
         case GOTTHARD:
            return "Gotthard";
        default:
            return "Undefined";
    }
}

#ifdef __cplusplus
} //namespace sls
#endif

#endif //ENUM_H