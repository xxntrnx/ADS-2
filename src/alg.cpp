// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double rez = 1.0;
  for (uint16_t i = 0; i < n; ++i) {
      rez = rez * value;
  }
  return rez;
}

uint64_t fact(uint16_t n) {
  uint64_t rez = 1;
  for (uint64_t i = 1; i <= n; ++i) {
    rez = rez * i;
  }
  return rez;
}

double calcItem(double x, uint16_t n) {
  double a = pown(x, n);
  double b = fact(n);
  return a / b;
}

double expn(double x, uint16_t count) {
  double rez = 0.0;
  for (uint16_t i = 0; i <= count; ++i) {
    rez = rez + (pown(x, i) / fact(i));
  }
  return rez;
}

double sinn(double x, uint16_t count) {
    double sum = 0;
    for (uint16_t i = 1; i <= count; i++) {
        double pown1 = pown(-1, i - 1);
        double pown2 = pown(x, 2 * i - 1);
        uint64_t fact1 = fact(2 * i - 1);
        sum += pown1 * (pown2 / fact1);
    }
    return sum;
}

double cosn(double x, uint16_t count) {
  double sum = 0;
  for (uint16_t i = 1; i <= count; i++) {
      double pown1 = pown((-1), (i-1));
      double pown2 = pown(x, (2*i-2));
      uint64_t fact1 = fact(2*i-2);
      sum += pown1 * (pown2 / fact1);
  }
  return sum;
}
