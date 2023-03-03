#pragma once
#include "triangle.h"

#ifdef FIGURESLIB_EXPORTS
#define FIGURESLIB_API __declspec(dllexport)
#else
#define FIGURESLIB_API __declspec(dllimport)
#endif
class R_Triangle : public Triangle {
public:
	FIGURESLIB_API R_Triangle(int a, int b, int c, int A, int B);
	FIGURESLIB_API bool check() override;
};