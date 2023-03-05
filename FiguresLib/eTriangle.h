#pragma once
#include "triangle.h"

class E_Triangle : public Triangle {
public:
	FIGURESLIB_API E_Triangle(int a, int A);
	FIGURESLIB_API bool check() override;
};