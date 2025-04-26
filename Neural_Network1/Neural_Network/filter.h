/*#pragma once
#include"matc.h"
#include "conv.h"
class filter
{
private:
	int width, height, depth, stride = 1;
	matc<double>* kernels, *biases;
	matc<double>* kernelsDer, *biasesDer;

public:
	filter();
	filter(int width, int height, int depth, std::pair<int, int>imgSize, int stride = 1);
	matc<double> convolute(const matc<double>* image);

};*/

