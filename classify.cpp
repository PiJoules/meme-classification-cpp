#include <stdio.h>
#include <opencv2/opencv.hpp>
#include "Argparse.h"

using namespace cv;
using namespace argparse;


int main(int argc, char* argv[]){
    ArgumentParser parser;
    parser.parse_args(argc, argv);

    if ( argc != 2 ){
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }

    Mat image;
    image = imread( argv[1], 1 );

    if (!image.data){
        printf("No image data \n");
        return -1;
    }
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);

    return 0;
}

