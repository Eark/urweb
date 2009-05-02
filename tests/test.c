#include <stdio.h>

#include "../include/urweb.h"

typedef uw_Basis_string uw_Test_t;

uw_Test_t uw_Test_create(uw_context ctx, uw_Basis_string s) {
  return s;
}

uw_Basis_string uw_Test_out(uw_context ctx, uw_Test_t s) {
  return s;
}

uw_Test_t uw_Test_frob(uw_context ctx, uw_Test_t s1, uw_Basis_string s2) {
  return uw_Basis_strcat(ctx, s1, s2);
}

uw_Basis_unit uw_Test_print(uw_context ctx) {
  printf("Hi there!\n");
  return uw_unit_v;
}

uw_Basis_unit uw_Test_foo(uw_context ctx) {
  printf("FOO!\n");
  return uw_unit_v;
}