#pragma once
#include "quadrangle.h"

#ifdef FIGURESLIB_EXPORTS
#define FIGURESLIB_API __declspec(dllexport)
#else
#define FIGURESLIB_API __declspec(dllimport)
#endif
class Parallelogram : public Quadrangle {
public:
	FIGURESLIB_API Parallelogram(int a, int b, int A, int B);
	FIGURESLIB_API bool check() override;
};