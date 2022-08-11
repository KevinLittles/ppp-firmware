#include <stdio.h>
#include <windows.h>
#include "../../common/hal.h"

void initHal() {

}

void led1(boolean s) {
    if(s) {
        printf("1\r\n");
    } else {
        printf("0\r\n");
    }

}

void pause1s() {
    Sleep(1000);
}
