#include "PInvokeNativeDep.h"

#define EXPORT __declspec(dllexport)

EXPORT double ComputeMean(int arrLen, int *arr)
{
    return ComputeMeanImpl(arrLen, arr);
}
