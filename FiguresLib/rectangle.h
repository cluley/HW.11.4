#pragma once
#include "quadrangle.h"

class Rectangle : public Quadrangle {
public:
	FIGURESLIB_API Rectangle(int a, int b);
	FIGURESLIB_API bool check() override;
};