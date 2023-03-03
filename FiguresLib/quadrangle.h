#pragma once
#include "figure.h"

#ifdef FIGURESLIB_EXPORTS
#define FIGURESLIB_API __declspec(dllexport)
#else
#define FIGURESLIB_API __declspec(dllimport)
#endif
class Quadrangle : public Figure {
public:
	FIGURESLIB_API Quadrangle();
	FIGURESLIB_API Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
	FIGURESLIB_API bool check() override;
	FIGURESLIB_API void print_info() override;
protected:
	int side_a;
	int side_b;
	int side_c;
	int side_d;
	int angle_A;
	int angle_B;
	int angle_C;
	int angle_D;
	std::string error_msg = "Четырехугольник: ошибка создания фигуры. Причина: сумма углов не равна 360";
};