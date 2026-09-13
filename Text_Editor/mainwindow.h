#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_actionExit_App_triggered();

    void on_actionBlank_triggered();

    void on_action_cpp_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
