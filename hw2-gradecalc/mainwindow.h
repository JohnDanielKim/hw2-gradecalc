//
//  mainwindow.hpp
//  hw2-gradecalc
//
//  Created by Daniel Kim on 6/9/20.
//  Copyright © 2020 John Kim. All rights reserved.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QComboBox>
#include <QLabel>
#include <QSpinBox>

class MainWindow : public QMainWindow
{
	Q_OBJECT
	
public:
	MainWindow(QWidget *parent = nullptr);
	~MainWindow();
	
private:
	
};
#endif // MAINWINDOW_H


/*
 
 type of layout: vbox, form, grid, stacked
 - do grid for exact placing
 https://doc.qt.io/qt-5/qlayout.html
 https://doc.qt.io/qt-5/qgridlayout.html
 
 window [
 select option for class
 display homework and test grade inputs
 select option for grading scheme
 display final grade
 ]
 
 components [
 select option: radio button or combo box
 display outputs: labels and sliders
 select option: radio button or combo box
 display final grade: label with math formula of grades
 ]
 
 - find way to identify which option is picked and change display and grading formula based on that
 - store each grade in a vector, then calculate using indices' values (specific indices for different grade)
 - store final grade as double var
 
 */
