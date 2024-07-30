#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;

int main()
{
    Mat girl = imread("girl.jpg"); //载入图像到Mat
    imshow("【1】动漫图", girl);//显示名为 "【1】动漫图"的窗口  
    waitKey(0);
    return 0;
