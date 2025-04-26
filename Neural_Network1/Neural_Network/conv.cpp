/*#include "conv.h"
conv::conv(int layerNum, int layerNodes[], std::pair<int, int>imgSize, int depth) : neuralNetwork(layerNum, layerNodes){
	this->imgSize = imgSize;
	this->depth = depth;
	
	//filter f(1, 2, 3, 4, 5);
}

void conv::addFilterLayer(int width, int height, int depth, int size, int stride) {
	if (numOfLayers < maxNumOfLayers) {
		if (numOfLayers == 0) {
			convLayers[numOfLayers] = new convLayer(width, height, depth, size, imgSize, stride);
		}
		else {
			convLayers[numOfLayers] = new convLayer(width, height, depth, size, convLayers[numOfLayers - 1]->resImgSize, stride);

		}
		numOfLayers++;
	}
}*/