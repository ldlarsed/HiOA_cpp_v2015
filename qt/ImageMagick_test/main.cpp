#include <QCoreApplication>
#include <Magick++.h>
#include <iostream>

using namespace std;
using namespace Magick;


int main(int argc, char **argv)
{
    QCoreApplication a(argc, argv);

    InitializeMagick(argv);

    Image image;
    try {
        // Read a file into image object
        image.read( "girl.gif" );

        // Crop the image to specified size (width, height, xOffset, yOffset)
        image.crop( Geometry(100,100, 100, 100) );

        // Write the image to a file
        image.write( "x.gif" );
    }
    catch( Exception &error_ )
    {
        cout << "Caught exception: " << error_.what() << endl;
        return 1;
    }




    return a.exec();
    //return 0;
}
