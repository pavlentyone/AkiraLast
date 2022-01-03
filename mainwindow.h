#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <math.h>
#include <random>
#include <QVector>
#include <QDebug>
#include <algorithm>
#include <QtMath>
#include <QStringListModel>
#include <QStringList>
#include <QListView>
#include <qcustomplot.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pbCreateGeneration_clicked();

    void on_pbProcess_clicked();

private:
    Ui::MainWindow *ui;
    double maxX;
    double minX;
    int chromosomeAmount;
    int geneAmount;
    double Function1(double x);
    double Function2(double x);
    int IntFromBoolVector(QVector<bool> vec);
    double IntNormalize(int val);
    QVector<QVector<bool>> OnePointMethod(QVector<QVector<bool>> parentGeneration);
    QVector<QVector<bool>> MultyPointMethod(QVector<QVector<bool>> parentGeneration);
    QVector<QVector<bool>> UniformMethod(QVector<QVector<bool>> parentGeneration);
    QVector<QVector<bool>> GetNextGeneration(QVector<QVector<bool>> parentGeneration, QVector<QVector<bool>> childGeneration);
    int GetIndexOfTheMostSimilarOne(QVector<QVector<bool>>, QVector<bool>);
    void ShowInListView(QVector<QVector<bool>> vec, QListView *lv);
    void ShowGraph(QVector<QVector<bool>> thisGeneration, QCustomPlot *Graph);
    QVector<QVector<bool>> firstGeneration;
    QVector<QVector<bool>> middleGeneration;
    QVector<QVector<bool>> minGeneration;
    QVector<QVector<bool>> maxGeneration;
};

#endif // MAINWINDOW_H
