#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{70, 95, 26, 14, 7};
    assert(score_signal(signal_case_1) == 122);
    assert(classify_signal(signal_case_1) == "review");
    Signal signal_case_2{86, 80, 15, 16, 9};
    assert(score_signal(signal_case_2) == 172);
    assert(classify_signal(signal_case_2) == "accept");
    Signal signal_case_3{99, 76, 16, 14, 8};
    assert(score_signal(signal_case_3) == 196);
    assert(classify_signal(signal_case_3) == "accept");
}
