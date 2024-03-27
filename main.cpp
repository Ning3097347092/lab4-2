#include <QCoreApplication>
#include <QDebug>

void  BubbleSort(QVector<int> & v)      // 冒泡排序法
{
    for(int i = 0 ; i < v.size();i++)
    {   bool isSorted = true;
        for(int j = 0; j <v.size()-i-1;j++)
        {   if(v[j+1] <v[j])
            {   isSorted = false;
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
        if(isSorted)    break;
    }
}

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
