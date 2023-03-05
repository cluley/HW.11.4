#pragma once
#include "figure.h"

class Triangle : public Figure {
public:
	FIGURESLIB_API Triangle();
	FIGURESLIB_API Triangle(int a, int b, int c, int A, int B, int C);
	FIGURESLIB_API bool check() override;
	FIGURESLIB_API void print_info() override;
protected:
	int side_a;
	int side_b;
	int side_c;
	int angle_A;
	int angle_B;
	int angle_C;
	std::string error_msg = "Треугольник: ошибка создания фигуры. Причина: сумма углов не равна 180";
};
