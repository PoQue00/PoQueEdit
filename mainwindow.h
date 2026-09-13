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

    void on_action_txt_triggered();

    void on_action_c_triggered();

    void on_action_html_triggered();

    void on_action_css_triggered();

    void on_action_js_triggered();

    void on_actioncustom_triggered();

    void on_actionOveride_triggered();

    void on_actionNew_File_triggered();

    void on_actionDuplicate_triggered();

    void on_actionRepository_triggered();

    void on_actionIssues_triggered();

    void on_actionProfile_triggered();

    void on_actionRestart_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
