#pragma once
#include "triangle.h"

class I_Triangle : public Triangle {
public:
	FIGURESLIB_API I_Triangle(int a, int b, int A, int B);
	FIGURESLIB_API bool check() override;
};