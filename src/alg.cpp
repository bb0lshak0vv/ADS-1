// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
        uint64_t i;
        for (i = 2; i*i <= value; i++) {
                if (value % i == 0) {
                        return false;
                }
        }
        return true;
}

uint64_t nPrime(uint64_t n) {
        uint64_t cnt = 0;
        uint64_t res = 1;
        while (cnt != n) {
                res++;
                if (checkPrime(res) == true)
                        cnt++;
        }
        return res;
}

uint64_t nextPrime(uint64_t value) {
        bool checker = false;
        while (checker == false) {
                value++;
                checker = checkPrime(value);
        }
        return value;
}

uint64_t sumPrime(uint64_t hbound) {
        uint64_t sum = 0;
        uint64_t result = 2;
        while (result != hbound) {
                if (checkPrime(result) == true)
                        sum += result;
                result++;
        }
        return sum;
}
