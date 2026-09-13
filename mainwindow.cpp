#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>
#include <QFile>
#include <QDir>
#include <QFileInfo>
#include <QDesktopServices>
#include <QUrl>
#include <QApplication>
#include <QProcess>

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

QString currentFileName;
QString currentFileExtension;


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

    currentFileExtension = ".cpp";

    currentFileName = QInputDialog::getText(
        this, tr("Name File"), tr("File name:"), QLineEdit::Normal, QString(), &ok);

    const QString fileName = currentFileName;

    if (!ok || fileName.trimmed().isEmpty())
        return;

    const QString folderPath = QDir::homePath() + "/Documents/PoQueEdit";
    if (!QDir().mkpath(folderPath))
        return;

    QFile file(folderPath + "/" + fileName + currentFileExtension);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        file.write(ui->textEdit->toPlainText().toUtf8());
}


void MainWindow::on_action_txt_triggered()
{
    bool ok;

    currentFileExtension = ".txt";

    currentFileName = QInputDialog::getText(
        this, tr("Name File"), tr("File name:"), QLineEdit::Normal, QString(), &ok);

    const QString fileName = currentFileName;

    if (!ok || fileName.trimmed().isEmpty())
        return;

    const QString folderPath = QDir::homePath() + "/Documents/PoQueEdit";
    if (!QDir().mkpath(folderPath))
        return;

    QFile file(folderPath + "/" + fileName + currentFileExtension);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        file.write(ui->textEdit->toPlainText().toUtf8());
}


void MainWindow::on_action_c_triggered()
{
    bool ok;

    currentFileExtension = ".c";

    currentFileName = QInputDialog::getText(
        this, tr("Name File"), tr("File name:"), QLineEdit::Normal, QString(), &ok);

    const QString fileName = currentFileName;

    if (!ok || fileName.trimmed().isEmpty())
        return;

    const QString folderPath = QDir::homePath() + "/Documents/PoQueEdit";
    if (!QDir().mkpath(folderPath))
        return;

    QFile file(folderPath + "/" + fileName + currentFileExtension);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        file.write(ui->textEdit->toPlainText().toUtf8());
}


void MainWindow::on_action_html_triggered()
{
    bool ok;

    currentFileExtension = ".html";

    currentFileName = QInputDialog::getText(
        this, tr("Name File"), tr("File name:"), QLineEdit::Normal, QString(), &ok);

    const QString fileName = currentFileName;

    if (!ok || fileName.trimmed().isEmpty())
        return;

    const QString folderPath = QDir::homePath() + "/Documents/PoQueEdit";
    if (!QDir().mkpath(folderPath))
        return;

    QFile file(folderPath + "/" + fileName + currentFileExtension);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        file.write(ui->textEdit->toPlainText().toUtf8());
}


void MainWindow::on_action_css_triggered()
{
    bool ok;

    currentFileExtension = ".css";

    currentFileName = QInputDialog::getText(
        this, tr("Name File"), tr("File name:"), QLineEdit::Normal, QString(), &ok);

    const QString fileName = currentFileName;

    if (!ok || fileName.trimmed().isEmpty())
        return;

    const QString folderPath = QDir::homePath() + "/Documents/PoQueEdit";
    if (!QDir().mkpath(folderPath))
        return;

    QFile file(folderPath + "/" + fileName + currentFileExtension);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        file.write(ui->textEdit->toPlainText().toUtf8());
}


void MainWindow::on_action_js_triggered()
{
    bool ok;

    currentFileExtension = ".js";

    currentFileName = QInputDialog::getText(
        this, tr("Name File"), tr("File name:"), QLineEdit::Normal, QString(), &ok);

    const QString fileName = currentFileName;

    if (!ok || fileName.trimmed().isEmpty())
        return;

    const QString folderPath = QDir::homePath() + "/Documents/PoQueEdit";
    if (!QDir().mkpath(folderPath))
        return;

    QFile file(folderPath + "/" + fileName + currentFileExtension);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        file.write(ui->textEdit->toPlainText().toUtf8());
}


void MainWindow::on_actioncustom_triggered()
{
    bool ok;

    currentFileExtension = QInputDialog::getText(
        this, tr("Custom Extension"), tr("Enter custom extension (with dot):"), QLineEdit::Normal, QString(), &ok);

    currentFileName = QInputDialog::getText(
        this, tr("Name File"), tr("File name:"), QLineEdit::Normal, QString(), &ok);

    const QString fileName = currentFileName;

    if (!ok || fileName.trimmed().isEmpty())
        return;

    const QString folderPath = QDir::homePath() + "/Documents/PoQueEdit";
    if (!QDir().mkpath(folderPath))
        return;

    QFile file(folderPath + "/" + fileName + currentFileExtension);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        file.write(ui->textEdit->toPlainText().toUtf8());
}


void MainWindow::on_actionOveride_triggered()
{
    const QString folderPath = QDir::homePath() + "/Documents/PoQueEdit";
    if (!QDir().mkpath(folderPath))
        return;

    QFile file(folderPath + "/" + currentFileName + currentFileExtension);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        file.write(ui->textEdit->toPlainText().toUtf8());
}


void MainWindow::on_actionNew_File_triggered()
{
    ui->textEdit->clear();
}


void MainWindow::on_actionDuplicate_triggered()
{
    if (currentFileName.trimmed().isEmpty())
        return;

    const QString folderPath = QDir::homePath() + "/Documents/PoQueEdit";
    if (!QDir().mkpath(folderPath))
        return;

    const QFileInfo fileInfo(currentFileName);
    const QString baseName = fileInfo.completeBaseName();
    const QString extension = fileInfo.completeSuffix().isEmpty()
        ? QString()
        : "." + fileInfo.completeSuffix();

    int duplicateNumber = 1;
    QString duplicatePath;
    do {
        duplicatePath = folderPath + "/" + baseName + " ("
            + QString::number(duplicateNumber++) + ")" + extension;
    } while (QFile::exists(duplicatePath));

    QFile file(duplicatePath);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        file.write(ui->textEdit->toPlainText().toUtf8());
}


void MainWindow::on_actionRepository_triggered()
{
    QDesktopServices::openUrl(QUrl("https://github.com/PoQue00/PoQueEdit"));
}


void MainWindow::on_actionIssues_triggered()
{
    QDesktopServices::openUrl(QUrl("https://github.com/PoQue00/PoQueEdit/issues"));
}


void MainWindow::on_actionProfile_triggered()
{
    QDesktopServices::openUrl(QUrl("https://github.com/PoQue00"));
}


void MainWindow::on_actionRestart_triggered()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

