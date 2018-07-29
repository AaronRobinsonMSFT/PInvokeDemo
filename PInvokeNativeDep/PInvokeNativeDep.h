#ifndef _PINVOKENATIVEDEP_H_
#define _PINVOKENATIVEDEP_H_

#ifdef BUILD_LIB
#define EXPORT_PINVOKENATIVEDEP __declspec(dllexport)
#else
#define EXPORT_PINVOKENATIVEDEP
#endif

// Compute the arithmetic mean of the integers in the supplied array
EXPORT_PINVOKENATIVEDEP double ComputeMeanImpl(int arrLen, int *arr);

#endif /* _PINVOKENATIVEDEP_H_ */
