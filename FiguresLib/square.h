#pragma once
#include "quadrangle.h"

#ifdef FIGURESLIB_EXPORTS
#define FIGURESLIB_API __declspec(dllexport)
#else
#define FIGURESLIB_API __declspec(dllimport)
#endif
class Square : public Quadrangle {
public:
	FIGURESLIB_API Square(int a);
	FIGURESLIB_API bool check() override;
};
