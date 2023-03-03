#pragma once
#include <iostream>

#ifdef FIGURESLIB_EXPORTS
#define FIGURESLIB_API __declspec(dllexport)
#else
#define FIGURESLIB_API __declspec(dllimport)
#endif
FIGURESLIB_API class incorrect_figure : public std::domain_error {
public:
	using domain_error::domain_error;
};