#define BUILD_LIB
#include "PInvokeNativeDep.h"

EXPORT_PINVOKENATIVEDEP double ComputeMeanImpl(int arrLen, int *arr)
{
    int i;
    double mn = 0.0;

    for (i = 0; i < arrLen; ++i)
        mn += arr[i];

    return (mn / arrLen);
}
