#pragma once
#include "quadrangle.h"

class Parallelogram : public Quadrangle {
public:
	FIGURESLIB_API Parallelogram(int a, int b, int A, int B);
	FIGURESLIB_API bool check() override;
};