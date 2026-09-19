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

    void on_actionCustom_triggered();

    void on_action_txt_2_triggered();

    void on_action_cpp_2_triggered();

    void on_action_c_2_triggered();

    void on_action_html_2_triggered();

    void on_action_css_2_triggered();

    void on_action_js_2_triggered();

    void on_actionBlank_2_triggered();

    void on_actionCustom_2_triggered();

    void on_action_txt_3_triggered();

    void on_action_cpp_3_triggered();

    void on_action_c_3_triggered();

    void on_action_html_3_triggered();

    void on_action_css_3_triggered();

    void on_action_js_3_triggered();

    void on_actioncurrent_triggered();

    void on_actionView_Issues_triggered();

    void on_actionCreate_Issue_triggered();

    void on_actionTheme_triggered();

    void on_tabWidget_tabBarDoubleClicked(int index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
