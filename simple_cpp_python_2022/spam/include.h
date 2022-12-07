#if defined(_MSC_VER) && defined(_DEBUG)
#undef _DEBUG
#include <Python.h>
#define _DEBUG 1
#else
#include <Python.h>
#endif