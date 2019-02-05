#include "enum.h"
#include <stdio.h>

int main(){
    int type = EIGER;
    printf("Detector type value is: %d\n", type);
    printf("The string representation is: %s\n", detectorTypeToString(EIGER));


    printf("Detector type value is: %d\n", JUNGFRAU);
    printf("The string representation is: %s\n", detectorTypeToString(JUNGFRAU));
}