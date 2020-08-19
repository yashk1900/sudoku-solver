#ifdef __cplusplus
extern "C"
{
#endif

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include "D:/yash/OpenCV/opencv/build/include/opencv2/ml.hpp"
using namespace cv::ml;


using namespace cv;

#define MAX_NUM_IMAGES	60000

class DigitRecognizer
{
public:
	DigitRecognizer();
	//~DigitRecognizer();

	bool train(char* trainPath, char* labelsPath);
	int classify(Mat img);

private:
	cv::Mat preprocessImage(Mat img);
	int readFlippedInteger(FILE* fp);

private:
	KNearest* knn;
	int numRows, numCols, numImages;
};
#ifdef __cplusplus
}
#endif