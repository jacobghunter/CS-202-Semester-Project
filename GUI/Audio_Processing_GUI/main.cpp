#include "WaveFileEditor.h"
#include "Wav.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WaveFileEditor w;
    w.show();
    return a.exec();
}
