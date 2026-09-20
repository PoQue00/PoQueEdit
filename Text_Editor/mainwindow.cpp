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
#include "settings.h"
#include <QTabWidget>
#include <QDebug>
#include <QWidget>
#include <QVBoxLayout>
#include <QWidget>
#include <QKeyEvent>
#include <QDebug>
#include <QShortcut>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    auto *newTabShortcut = new QShortcut(QKeySequence(Qt::CTRL | Qt::Key_N), this);
    connect(newTabShortcut, &QShortcut::activated, this, [this]() {
        on_tabWidget_tabBarDoubleClicked(0);
    });
    auto *closeTabShortcut = new QShortcut(QKeySequence(Qt::CTRL | Qt::Key_W), this);
    connect(closeTabShortcut, &QShortcut::activated, this, [this]() {
        int currentIndex = ui->tabWidget->currentIndex();
        if (currentIndex != -1) {
            QWidget *currentWidget = ui->tabWidget->widget(currentIndex);
            ui->tabWidget->removeTab(currentIndex);
            delete currentWidget;
        }
    });
    auto *renameTabShortcut = new QShortcut(QKeySequence(Qt::CTRL | Qt::Key_R), this);
    connect(renameTabShortcut, &QShortcut::activated, this, [this]() {
        int currentIndex = ui->tabWidget->currentIndex();
        if (currentIndex != -1) {
            bool ok;
            QString newName = QInputDialog::getText(this, tr("Rename Tab"),
                                                    tr("New tab name:"), QLineEdit::Normal,
                                                    ui->tabWidget->tabText(currentIndex), &ok);
            if (ok && !newName.isEmpty()) {
                renameTab(currentIndex, newName);
            }
        }
    });
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
    currentFileName = QInputDialog::getText(
        this, tr("Name File"), tr("File name:"), QLineEdit::Normal, QString());

    const QString fileName = currentFileName;

    const QString folderPath = QDir::homePath() + "/Documents/PoQueEdit";
    if (!QDir().mkpath(folderPath))
        return;

    QFile file(folderPath + "/" + fileName + currentFileExtension);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        file.write(ui->textEdit->toPlainText().toUtf8());
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


void MainWindow::on_actionProfile_triggered()
{
    QDesktopServices::openUrl(QUrl("https://github.com/PoQue00"));
}


void MainWindow::on_actionRestart_triggered()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}


void MainWindow::on_actionCustom_triggered()
{
    ui->textEdit->clear();
    currentFileExtension = QInputDialog::getText(
        this, tr("Custom Extension"), tr("Enter custom extension (with dot):"), QLineEdit::Normal, QString());
}


void MainWindow::on_action_txt_2_triggered()
{
    ui->textEdit->clear();
    currentFileExtension = ".txt";
}


void MainWindow::on_action_cpp_2_triggered()
{
    ui->textEdit->clear();
    currentFileExtension = ".cpp";
}


void MainWindow::on_action_c_2_triggered()
{
    ui->textEdit->clear();
    currentFileExtension = ".c";
}


void MainWindow::on_action_html_2_triggered()
{
    ui->textEdit->clear();
    currentFileExtension = ".html";
}


void MainWindow::on_action_css_2_triggered()
{
    ui->textEdit->clear();
    currentFileExtension = ".css";
}


void MainWindow::on_action_js_2_triggered()
{
    ui->textEdit->clear();
    currentFileExtension = ".js";
}


void MainWindow::on_actionBlank_2_triggered()
{
    MainWindow *window = new MainWindow();
    window->show();
    currentFileExtension = "";
    ui->textEdit->clear();
}


void MainWindow::on_actionCustom_2_triggered()
{
    MainWindow *window = new MainWindow();
    window->show();
    currentFileExtension = QInputDialog::getText(
        this, tr("Custom Extension"), tr("Enter custom extension (with dot):"), QLineEdit::Normal, QString());
    ui->textEdit->clear();
}


void MainWindow::on_action_txt_3_triggered()
{
    MainWindow *window = new MainWindow();
    window->show();
    currentFileExtension = ".txt";
    ui->textEdit->clear();
}


void MainWindow::on_action_cpp_3_triggered()
{
    MainWindow *window = new MainWindow();
    window->show();
    currentFileExtension = ".cpp";
    ui->textEdit->clear();
}


void MainWindow::on_action_c_3_triggered()
{
    MainWindow *window = new MainWindow();
    window->show();
    currentFileExtension = ".c";
    ui->textEdit->clear();
}


void MainWindow::on_action_html_3_triggered()
{
    MainWindow *window = new MainWindow();
    window->show();
    currentFileExtension = ".html";
    ui->textEdit->clear();
}


void MainWindow::on_action_css_3_triggered()
{
    MainWindow *window = new MainWindow();
    window->show();
    currentFileExtension = ".css";
    ui->textEdit->clear();
}


void MainWindow::on_action_js_3_triggered()
{
    MainWindow *window = new MainWindow();
    window->show();
    currentFileExtension = ".js";
    ui->textEdit->clear();
}


void MainWindow::on_actioncurrent_triggered()
{
    currentFileName = QInputDialog::getText(
        this, tr("Name File"), tr("File name:"), QLineEdit::Normal, QString());

    const QString fileName = currentFileName;

    const QString folderPath = QDir::homePath() + "/Documents/PoQueEdit";
        if (!QDir().mkpath(folderPath))
            return; 

    QFile file(folderPath + "/" + fileName + currentFileExtension);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        file.write(ui->textEdit->toPlainText().toUtf8());
}


void MainWindow::on_actionView_Issues_triggered()
{
    QDesktopServices::openUrl(QUrl("https://github.com/PoQue00/PoQueEdit/issues"));
}


void MainWindow::on_actionCreate_Issue_triggered()
{
    QDesktopServices::openUrl(QUrl("https://github.com/PoQue00/PoQueEdit/issues/new"));
}


void MainWindow::on_actionTheme_triggered()
{
    if (!settingsWindow) {
        settingsWindow = new Settings(this);
        settingsWindow->setAttribute(Qt::WA_DeleteOnClose);
        connect(settingsWindow, &QObject::destroyed, this, [this]() {
            settingsWindow = nullptr;
        });
    }

    settingsWindow->show();
    settingsWindow->raise();
    settingsWindow->activateWindow();
}


void MainWindow::on_tabWidget_tabBarDoubleClicked(int index)
{
    Q_UNUSED(index);

    QWidget *newTabPage = new QWidget();
    QVBoxLayout *layout = new QVBoxLayout(newTabPage);
    QTextEdit *textEdit = new QTextEdit(newTabPage);
    layout->addWidget(textEdit);
    ui->tabWidget->addTab(newTabPage, tr("Untitled"));
    ui->tabWidget->setCurrentWidget(newTabPage);
}

void MainWindow::deleteTab(int index)
{
    if (index >= 0 && index < ui->tabWidget->count())
    {
        QWidget *tabPage = ui->tabWidget->widget(index);
        ui->tabWidget->removeTab(index);
        delete tabPage;
    }
}

void MainWindow::renameTab(int index, const QString &newName)
{
    if (index >= 0 && index < ui->tabWidget->count())
    {
        ui->tabWidget->setTabText(index, newName);
    }
}

