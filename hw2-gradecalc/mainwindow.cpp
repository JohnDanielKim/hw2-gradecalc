//
//  mainwindow.cpp
//  hw2-gradecalc
//
//  Created by Daniel Kim on 6/9/20.
//  Copyright © 2020 John Kim. All rights reserved.
//

#include "mainwindow.h"
#include <string>
#include <QString>
#include <QVariant>
#include <QVector>

MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent)
{
	
	QWidget* centralWidget = new QWidget();
	
	centralWidget->setLayout(layout);
	setCentralWidget(centralWidget);
	
}

MainWindow::~MainWindow()
{
}

