/* cuddly-eureka - Storyboard editor by Team210
 * Copyright (C) 2019  Alexander Kraus <nr4@z10.info>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "MainWindow.hpp"
#include "ui_MainWindow.h"

#include <QDebug>

MainWindow::MainWindow(QApplication *app)
    : QMainWindow()
    , m_ui(new Ui::MainWindow)
    , m_demo(new Demo)
{
    m_ui->setupUi(this);
 
    //FIXME: move that to the undo stack
    for(int i=0; i<10; ++i)
        m_demo->addScene(QString("Scene") + QString::number(i));
    m_demo_model = new DemoModel(m_demo);
    
    m_ui->tableView->setModel(m_demo_model);
    m_ui->tableView->update();
}

MainWindow::~MainWindow()
{
    delete m_ui;
}

void MainWindow::newDemo()
{
}

void MainWindow::saveDemo()
{
}

void MainWindow::openDemo()
{
}
