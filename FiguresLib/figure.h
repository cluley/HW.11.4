#pragma once
#include <string>
#include <iostream>
#include "incorrect_figure.h"

#ifdef FIGURESLIB_EXPORTS
#define FIGURESLIB_API __declspec(dllexport)
#else
#define FIGURESLIB_API __declspec(dllimport)
#endif
class Figure {
public:
	FIGURESLIB_API bool virtual check();
	FIGURESLIB_API void virtual print_info();
	FIGURESLIB_API std::string get_intro() { return intro; }
protected:
	int sides = 0;
	std::string intro = "Фигура: ";
};
