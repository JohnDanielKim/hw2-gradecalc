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
	
	layout = new QGridLayout();
	comboBox = new QComboBox();
	QVariant v(0);
	
	comboBox->insertItem(0, "", v);
	comboBox->insertItem(1, "Pic 10B", v);
	comboBox->insertItem(2, "Pic 10C", v);
	layout->addWidget(comboBox, 1, 1);
	
	connect(comboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), [=](int index){
		
	});
	
	QWidget* centralWidget = new QWidget();
	
	centralWidget->setLayout(layout);
	setCentralWidget(centralWidget);
	
}

MainWindow::~MainWindow()
{
}

