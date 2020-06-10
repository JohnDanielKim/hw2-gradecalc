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
	
	vec = new QVector<int>(12);
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
			label = new QLabel("Homework 2: ");
			layout->addWidget(label, 3, 1);
			spinBox = new QSpinBox();
			layout->addWidget(spinBox, 3, 2);
			spinBox->setRange(1, 100);
			connect(spinBox, QOverload<int>::of(&QSpinBox::valueChanged),
			        [=](int val){
				        vec->insert(1, val);
			        });
			label = new QLabel("Homework 3: ");
			layout->addWidget(label, 4, 1);
			spinBox = new QSpinBox();
			layout->addWidget(spinBox, 4, 2);
			spinBox->setRange(1, 100);
			connect(spinBox, QOverload<int>::of(&QSpinBox::valueChanged),
			        [=](int val){
				        vec->insert(2, val);
			        });
			label = new QLabel("Homework 4: ");
			layout->addWidget(label, 5, 1);
			spinBox = new QSpinBox();
			layout->addWidget(spinBox, 5, 2);
			spinBox->setRange(1, 100);
			connect(spinBox, QOverload<int>::of(&QSpinBox::valueChanged),
			        [=](int val){
				        vec->insert(3, val);
			        });
			label = new QLabel("Homework 5: ");
			layout->addWidget(label, 6, 1);
			spinBox = new QSpinBox();
			layout->addWidget(spinBox, 6, 2);
			spinBox->setRange(1, 100);
			connect(spinBox, QOverload<int>::of(&QSpinBox::valueChanged),
			        [=](int val){
				        vec->insert(4, val);
			        });
			label = new QLabel("Homework 6: ");
			layout->addWidget(label, 7, 1);
			spinBox = new QSpinBox();
			layout->addWidget(spinBox, 7, 2);
			spinBox->setRange(1, 100);
			connect(spinBox, QOverload<int>::of(&QSpinBox::valueChanged),
			        [=](int val){
				        vec->insert(5, val);
			        });
			label = new QLabel("Homework 7: ");
			layout->addWidget(label, 8, 1);
			spinBox = new QSpinBox();
			layout->addWidget(spinBox, 8, 2);
			spinBox->setRange(1, 100);
			connect(spinBox, QOverload<int>::of(&QSpinBox::valueChanged),
			        [=](int val){
				        vec->insert(6, val);
			        });
			label = new QLabel("Homework 8: ");
			layout->addWidget(label, 9, 1);
			spinBox = new QSpinBox();
			layout->addWidget(spinBox, 9, 2);
			spinBox->setRange(1, 100);
			connect(spinBox, QOverload<int>::of(&QSpinBox::valueChanged),
			        [=](int val){
				        vec->insert(7, val);
			        });
			label = new QLabel("Midterm 1: ");
			layout->addWidget(label, 10, 1);
			spinBox = new QSpinBox();
			layout->addWidget(spinBox, 10, 2);
			spinBox->setRange(1, 100);
			connect(spinBox, QOverload<int>::of(&QSpinBox::valueChanged),
			        [=](int val){
				        vec->insert(8, val);
			        });
			label = new QLabel("Midterm 2: ");
			layout->addWidget(label, 11, 1);
			spinBox = new QSpinBox();
			layout->addWidget(spinBox, 11, 2);
			spinBox->setRange(1, 100);
			connect(spinBox, QOverload<int>::of(&QSpinBox::valueChanged),
			        [=](int val){
				        vec->insert(9, val);
			        });
			label = new QLabel("Final Exam: ");
			layout->addWidget(label, 12, 1);
			spinBox = new QSpinBox();
			layout->addWidget(spinBox, 12, 2);
			spinBox->setRange(1, 100);
			connect(spinBox, QOverload<int>::of(&QSpinBox::valueChanged),
			        [=](int val){
				        vec->insert(10, val);
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

