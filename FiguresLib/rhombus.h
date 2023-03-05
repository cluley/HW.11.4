#pragma once
#include "quadrangle.h"

class Rhombus : public Quadrangle {
public:
	FIGURESLIB_API Rhombus(int a, int A, int B);
	FIGURESLIB_API bool check() override;
};