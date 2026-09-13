#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qfile.h"
#include <QInputDialog>
#include <QFile>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionExit_App_triggered()
{
    QApplication::quit();
}


void MainWindow::on_actionBlank_triggered()
{
    ui->textEdit->clear();
}


void MainWindow::on_action_cpp_triggered()
{
    bool ok;
    const QString fileName = QInputDialog::getText(
        this, tr("Name File"), tr("File name:"), QLineEdit::Normal, QString(), &ok);

    if (!ok || fileName.trimmed().isEmpty())
        return;

    const QString folderPath = QDir::homePath() + "/Documents/PoQueEdit";
    if (!QDir().mkpath(folderPath))
        return;

    QFile file(folderPath + "/" + fileName + ".cpp");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        file.write(ui->textEdit->toPlainText().toUtf8());
}


void MainWindow::on_action_txt_triggered()
{
    bool ok;
    const QString fileName = QInputDialog::getText(
        this, tr("Name File"), tr("File name:"), QLineEdit::Normal, QString(), &ok);

    if (!ok || fileName.trimmed().isEmpty())
        return;

    const QString folderPath = QDir::homePath() + "/Documents/PoQueEdit";
    if (!QDir().mkpath(folderPath))
        return;

    QFile file(folderPath + "/" + fileName + ".txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        file.write(ui->textEdit->toPlainText().toUtf8());
}


void MainWindow::on_action_c_triggered()
{
    bool ok;
    const QString fileName = QInputDialog::getText(
        this, tr("Name File"), tr("File name:"), QLineEdit::Normal, QString(), &ok);

    if (!ok || fileName.trimmed().isEmpty())
        return;

    const QString folderPath = QDir::homePath() + "/Documents/PoQueEdit";
    if (!QDir().mkpath(folderPath))
        return;

    QFile file(folderPath + "/" + fileName + ".c");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        file.write(ui->textEdit->toPlainText().toUtf8());
}


void MainWindow::on_action_html_triggered()
{
    bool ok;
    const QString fileName = QInputDialog::getText(
        this, tr("Name File"), tr("File name:"), QLineEdit::Normal, QString(), &ok);

    if (!ok || fileName.trimmed().isEmpty())
        return;

    const QString folderPath = QDir::homePath() + "/Documents/PoQueEdit";
    if (!QDir().mkpath(folderPath))
        return;

    QFile file(folderPath + "/" + fileName + ".html");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        file.write(ui->textEdit->toPlainText().toUtf8());
}


void MainWindow::on_action_css_triggered()
{
    bool ok;
    const QString fileName = QInputDialog::getText(
        this, tr("Name File"), tr("File name:"), QLineEdit::Normal, QString(), &ok);

    if (!ok || fileName.trimmed().isEmpty())
        return;

    const QString folderPath = QDir::homePath() + "/Documents/PoQueEdit";
    if (!QDir().mkpath(folderPath))
        return;

    QFile file(folderPath + "/" + fileName + ".css");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        file.write(ui->textEdit->toPlainText().toUtf8());
}


void MainWindow::on_action_js_triggered()
{
    bool ok;
    const QString fileName = QInputDialog::getText(
        this, tr("Name File"), tr("File name:"), QLineEdit::Normal, QString(), &ok);

    if (!ok || fileName.trimmed().isEmpty())
        return;

    const QString folderPath = QDir::homePath() + "/Documents/PoQueEdit";
    if (!QDir().mkpath(folderPath))
        return;

    QFile file(folderPath + "/" + fileName + ".js");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        file.write(ui->textEdit->toPlainText().toUtf8());
}


void MainWindow::on_actioncustom_triggered()
{
    bool ok;
    const QString fileName = QInputDialog::getText(
        this, tr("Name File"), tr("File name:"), QLineEdit::Normal, QString(), &ok);

    if (!ok || fileName.trimmed().isEmpty())
        return;

    const QString folderPath = QDir::homePath() + "/Documents/PoQueEdit";
    if (!QDir().mkpath(folderPath))
        return;

    QFile file(folderPath + "/" + fileName);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        file.write(ui->textEdit->toPlainText().toUtf8());
}

