#include <opencv2\opencv.hpp>


using namespace cv;
using namespace std;

int main(void)
{
	Mat a;
	
	VideoCapture video(0);

	if (!video.isOpened()) {
		printf("cannot connect to camera");
		getchar();
		return 1;
	}
	namedWindow("camera");

	while (1) {

		video >> a;
		imshow("camera", a);

		if (waitKey(1) == 27)
			break;
	}
}
