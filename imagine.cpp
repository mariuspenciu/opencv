#include <opencv2\opencv.hpp>


using namespace cv;
using namespace std;

int main(void)
{
	Mat a;
	a = imread("c:\\Users\Penciu\\Desktop\\download.png");

	namedWindow("imagine", WINDOW_NORMAL);

	imshow("imagine", a);

	waitKey(-1);
}