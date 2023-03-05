#pragma once
#include "triangle.h"

class R_Triangle : public Triangle {
public:
	FIGURESLIB_API R_Triangle(int a, int b, int c, int A, int B);
	FIGURESLIB_API bool check() override;
};