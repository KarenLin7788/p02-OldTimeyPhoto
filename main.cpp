//Author: Xinru Lin
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include"bitmap.h"
#include<cstdlib>

using namespace std;
int main()
{
string file;

Bitmap image;
vector<vector<Pixel> >bmp;
Pixel rgb;
bmp=image.toPixelMatrix();
cout<<"What is the name of the image?(BMP format image only)"<<endl;
cin>>file;
image.open(file);
bmp=image.toPixelMatrix();
cout<<"The size of the file is"<< bmp.size()<<"Pixel's height and "<<bmp[0].size()<< "Pixel's width"<<endl;


return 0;
}


//By using "cout", ask usere for the name they want to use for the file (must be a Windows BMP format image).
//After getting the response from users, convert the image to make every pixel in grayscale.
//After coverting the photo, ask users to save the file as oldtimey.bm
