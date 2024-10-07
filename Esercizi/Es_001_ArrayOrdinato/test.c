#include <stdio.h>
#include <stdlib.h>

#include "ordered_array.h"
#include "unity.h"

int *precedes_int(void *arg1, void *arg2) {
  int *i1 = (int *)arg1;
  int *i2 = (int *)arg2;

  if (*i1 < *i2) return 1;
  return 0;
}

int i1, i2, i3;
OrderedArray *ordered_array_int;

void setup(void) {
  i1 = 1;
  i2 = 2;
  i3 = 3;
  ordered_array_int = ordered_array_create(precedes_int);
}

void test_ordered_array_is_empty_zero_el(void) {
  TEST_ASSERT_TRUE(ordered_array_is_empty(ordered_array_int));  // test_assert_true verifica che la condizione sia vera
}

void test_ordered_array_is_empty_one_el(void) {
  ordered_array_add(ordered_array_int, i1);
  TEST_ASSERT_FALSE(ordered_array_is_empty(ordered_array_int));
}