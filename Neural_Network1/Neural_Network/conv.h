/*#pragma once
#include "filter.h"
#include"neuralNetwork.h"
class conv : public neuralNetwork
{
private:
	std::pair<int, int>imgSize;
	int depth;
	struct convLayer
	{
		std::pair<int, int>imgSize, resImgSize;
		int width, height, depth, size, stride;
		filter **f = new filter * [1];
		convLayer(int width, int height, int depth, int size, std::pair<int, int>imgSize, int stride = 1) {
			this->width = width;
			this->height = height;
			this->depth = depth;
			this->size = size;
			this->stride = stride;
			this->imgSize = imgSize;
			resImgSize = { imgSize.first - height + 1, imgSize.second - width + 1 };
			f = new filter*[size];
			for (int i = 0; i < size; i++) {
				f[i] = new filter(width, height, depth, imgSize);
			}
		}
		~convLayer() {
			for (int i = 0; i < size; i++) {
				delete f[i];
			}
			delete[] f;
		}
	};
	int numOfLayers = 0, maxNumOfLayers = 10;
	convLayer** convLayers = new convLayer*[maxNumOfLayers];
public:
	conv(int layerNum, int layerNodes[], std::pair<int, int>imgSize, int depth);
	void addFilterLayer(int width, int height, int depth, int size, int stride = 1);
};*/

