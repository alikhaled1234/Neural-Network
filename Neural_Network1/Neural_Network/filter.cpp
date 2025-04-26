/*#include "filter.h"


filter::filter()
{
}

filter::filter(int width, int height, int depth, std::pair<int, int>imgSize, int stride) {
	this->width = width;
	this->height = height;
	this->depth = depth;
	this->stride = stride;
	biases = new matc<double>(imgSize.first - height + 1, imgSize.second - width + 1);
	biasesDer = new matc<double>(imgSize.first - height + 1, imgSize.second - width + 1);
	kernels = new matc<double>[depth];
	kernelsDer = new matc<double>[depth];
	for (int i = 0; i < depth; i++) {
		kernels[i].resize(height, width, 2);
		kernelsDer[i].resize(height, width, 0);
	}
}

matc<double> filter::convolute(const matc<double>* image) {
	matc<double>tmp(image->getSize().first - height + 1, image->getSize().second - width + 1);
	double val = 0.0;
	for (int i = height; i <= image->getSize().first; i += stride) {
		for (int j = width; j <= image->getSize().second; j += stride) {
			for (int k = 0; k < depth; k++) {
				for (int ii = 0; ii < height; ii++) {
					for (int jj = 0; jj < width; jj++) {
						val += kernels[k].getElement(ii, jj) * image->getElement(i, j);
					}
				}
			}
			val += biases->getElement(i - height, j - width);
			tmp.setElement(i - height, j - width, val);
			val = 0.0;
		}
	}

}*/