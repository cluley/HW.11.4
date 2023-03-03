#pragma once
#include "triangle.h"

#ifdef FIGURESLIB_EXPORTS
#define FIGURESLIB_API __declspec(dllexport)
#else
#define FIGURESLIB_API __declspec(dllimport)
#endif
class I_Triangle : public Triangle {
public:
	FIGURESLIB_API I_Triangle(int a, int b, int A, int B);
	FIGURESLIB_API bool check() override;
};