//
// Created by eric on 6/23/24.
//

#ifndef TEST_H
#define TEST_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class test; }
QT_END_NAMESPACE

class test : public QMainWindow {
Q_OBJECT

public:
    explicit test(QWidget *parent = nullptr);
    ~test() override;

private:
    Ui::test *ui;
};


#endif //TEST_H
