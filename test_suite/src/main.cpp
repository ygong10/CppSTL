#include "test_suite.h"

bool yo() {
    return false;
}

int main() {
    test_suite* ts = new test_suite::test_suite();
    ts->add("yo", yo);
    ts->run("yo");
    ts->run("hi");
    ts->run_all();
    return 0;
}