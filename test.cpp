//
// Created by eric on 6/23/24.
//

// You may need to build the project (run Qt uic code generator) to get "ui_test.h" resolved

#include "test.h"
#include "ui_test.h"


test::test(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::test) {
    ui->setupUi(this);
}

test::~test() {
    delete ui;
}
