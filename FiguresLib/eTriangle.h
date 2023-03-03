#pragma once
#include "triangle.h"

#ifdef FIGURESLIB_EXPORTS
#define FIGURESLIB_API __declspec(dllexport)
#else
#define FIGURESLIB_API __declspec(dllimport)
#endif
class E_Triangle : public Triangle {
public:
	FIGURESLIB_API E_Triangle(int a, int A);
	FIGURESLIB_API bool check() override;
};