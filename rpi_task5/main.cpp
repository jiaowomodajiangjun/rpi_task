#include <opencv4/opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
    Mat img = imread("test.jpg");
    if(img.empty())
    {
        cout << "图片读取失败！" << endl;
        return -1;
    }
    imshow("Image", img);
    waitKey(0);
    destroyAllWindows();
    return 0;
}
