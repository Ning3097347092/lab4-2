#include <QCoreApplication>
#include <QDebug>
#include <bubblesort.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVector<int> vec(10);                // 定义一个连续数组,10个int的空间

    for(int i=0; i < 10; i++)
        vec[i] =  rand() % 100;           //  使用随机函数赋值到数组中

    qDebug() << "原始数列："<< vec;       // 输出数组

    BubbleSort(vec);
    //qSort(vec.begin(),vec.end());       // 使用Qt的排序函数对数组进行排序
    qDebug() << "已排序数列："<< vec;     // 再次输出已排序的数组

    return a.exec();
}
