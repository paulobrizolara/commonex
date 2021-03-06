#ifndef MACROS_H
#define MACROS_H

#include "commonex.h"

#ifndef COMMONEX_MACRO_CLASH

#define EXCEPTION_CLASS COMMONEX_CLASS
#define EXCEPTION_SUBCLASS COMMONEX_SUBCLASS

#define CHECK_BOUNDS    COMMONEX_CHECK_BOUNDS
#define CHECK_NEG_BOUND COMMONEX_CHECK_NEG_BOUND
#define CHECK_NOTNULL   COMMONEX_CHECK_NOTNULL
#define CHECK_ASSERTION COMMONEX_ASSERT

#endif

#endif // MACROS_H
