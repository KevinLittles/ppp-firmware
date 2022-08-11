#include "behavior.h"
#include "hal.h"

void behavior() {
    initHal();
    while(1) {
        led1(true);
        pause1s();
        led1(false);
        pause1s();
    }
}
