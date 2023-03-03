#pragma once
#include "quadrangle.h"

#ifdef FIGURESLIB_EXPORTS
#define FIGURESLIB_API __declspec(dllexport)
#else
#define FIGURESLIB_API __declspec(dllimport)
#endif
class Rectangle : public Quadrangle {
public:
	FIGURESLIB_API Rectangle(int a, int b);
	FIGURESLIB_API bool check() override;
};