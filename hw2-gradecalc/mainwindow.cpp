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
	
	connect(comboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), [=] (int index){
		if (index == 1) {
			label = new QLabel("Homework 1: ");
			layout->addWidget(label, 2, 1);
			spinBox = new QSpinBox();
			layout->addWidget(spinBox, 2, 2);
			spinBox->setRange(1, 100);
			connect(spinBox, QOverload<int>::of(&QSpinBox::valueChanged),
			        [=](int val){
				        vec->insert(0, val);
			        });

			comboBox = new QComboBox();
			comboBox->insertItem(0, "", v);
			comboBox->insertItem(1, "Grading Scheme A", v);
			comboBox->insertItem(2, "Grading Scheme B", v);
			layout->addWidget(comboBox, 2, 3);
			
			connect(comboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), [=] (int index){
				if (index == 1) {
					
				}
				
				if (index == 2) {
					
				}
			});
		}
		
		if (index == 2) {
			
			
			comboBox = new QComboBox();
			comboBox->insertItem(0, "", v);
			comboBox->insertItem(1, "Grading Scheme A", v);
			comboBox->insertItem(2, "Grading Scheme B", v);
			layout->addWidget(comboBox, 2, 3);
			
			connect(comboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), [=] (int index){
				if (index == 1) {
					
				}
				
				if (index == 2) {
					
				}
			});
		}
	});
	
	QWidget* centralWidget = new QWidget();
	
	centralWidget->setLayout(layout);
	setCentralWidget(centralWidget);
	
}

MainWindow::~MainWindow()
{
}

