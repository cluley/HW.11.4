#pragma once
#include "quadrangle.h"

class Square : public Quadrangle {
public:
	FIGURESLIB_API Square(int a);
	FIGURESLIB_API bool check() override;
};
