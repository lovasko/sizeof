// Copyright (c) 2019 Daniel Lovasko
// All Rights Reserved
//
// Distributed under the terms of the 2-clause BSD License. The full
// license is in the file LICENSE, distributed as part of this software.

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


#define entry(str, len) (void)printf("| %18s | %4zu |\n", str, len)

// Print a table of standard C types and their respective sizes in bytes.
int
main(void)
{
  (void)printf("+--------------------+------+\n");
  (void)printf("|               type | size |\n");
  (void)printf("+--------------------+------+\n");

  entry("char",                   sizeof(char));
  entry("signed char",            sizeof(signed char));
  entry("short",                  sizeof(short));
  entry("int",                    sizeof(int));
  entry("long",                   sizeof(long));
  entry("long long",              sizeof(long long));

#ifdef bool
  entry("_Bool",                  sizeof(_Bool));
#endif

  entry("unsigned char",          sizeof(unsigned char));
  entry("unsigned short",         sizeof(unsigned short));
  entry("unsigned int",           sizeof(unsigned int));
  entry("unsigned long",          sizeof(unsigned long));
  entry("unsigned long long",     sizeof(unsigned long long));
  entry("float",                  sizeof(float));
  entry("double",                 sizeof(double));
  entry("long double",            sizeof(long double));

#ifdef complex
  entry("float _Complex",         sizeof(float _Complex));
  entry("double _Complex",        sizeof(double _Complex));
  entry("long double _Complex",   sizeof(long double _Complex));
#endif

#ifdef imaginary
  entry("float _Imaginary",       sizeof(float _Imaginary));
  entry("double _Imaginary",      sizeof(double _Imaginary));
  entry("long double _Imaginary", sizeof(long double _Imaginary));
#endif

  entry("void*",                  sizeof(void*));

  (void)printf("+--------------------+------+\n");

  return EXIT_SUCCESS;
}
