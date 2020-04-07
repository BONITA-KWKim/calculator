#include "basic.h"

int BasicOperation::sum(int a1, int a2) {
    return a1 + a2;
}

int BasicOperation::substract(int a1, int a2) {
    return a1 - a2;
}

int BasicOperation::multiple(int a1, int a2) {
    return a1 * a2;
}

float BasicOperation::divide(int a1, int a2) {
    assert(a2 != 0);
    return a1 / a2;
}
