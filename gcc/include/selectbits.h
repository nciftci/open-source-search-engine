/* This file fixes __FD_ZERO bug for glibc-2.0.x. */
#ifndef _SELECTBITS_H_WRAPPER
#include <features.h>
#include_next <selectbits.h>

#if defined(__FD_ZERO) && defined(__GLIBC__) && defined(__GLIBC_MINOR__) && __GLIBC__ == 2 && __GLIBC_MINOR__ == 0
#undef __FD_ZERO
#define __FD_ZERO(fdsetp) \
  do { \
    int __d0, __d1; \
  __asm__ __volatile__ ("cld; rep; stosl" \
                        : "=&c" (__d0), "=&D" (__d1) \
                        : "a" (0), "0" (sizeof (__fd_set) \
                                        / sizeof (__fd_mask)), \
                          "1" ((__fd_mask *) (fdsetp)) \
                        : "memory"); \
  } while (0)
#endif

#define _SELECTBITS_H_WRAPPER
#endif /* _SELECTBITS_H_WRAPPER */
