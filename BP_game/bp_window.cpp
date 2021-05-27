#include "bp_window.h"
#include "ui_bp_window.h"

BP_Window::BP_Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BP_Window)
{
    ui->setupUi(this);
}

BP_Window::~BP_Window()
{
    delete ui;
}

