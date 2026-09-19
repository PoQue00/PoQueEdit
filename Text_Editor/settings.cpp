#include "settings.h"
#include "ui_settings.h"
#include <QApplication>
#include <QDebug>

Settings::Settings(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Settings)
{
    ui->setupUi(this);
}

Settings::~Settings()
{
    delete ui;
}


void Settings::on_comboBox_currentTextChanged(const QString &arg1)
{
    const auto applyTheme = [](const QString &windowBackground,
                               const QString &widgetBackground,
                               const QString &foreground,
                               const QString &border,
                               const QString &hoverBorder,
                               const QString &selectedBackground) {
        qApp->setStyleSheet(
            "QMainWindow, QWidget { background-color: " + windowBackground + "; color: " + foreground + "; }"
            "QComboBox, QTextEdit { background-color: " + widgetBackground + "; color: " + foreground + "; border: 1px solid " + border + "; border-radius: 5px; padding: 4px; }"
            "QComboBox:hover, QTextEdit:hover { border: 1px solid " + hoverBorder + "; }"
            "QComboBox:focus, QTextEdit:focus { border: 1px solid " + hoverBorder + "; }"
            "QMenuBar, QMenu { background-color: " + widgetBackground + "; color: " + foreground + "; border: 1px solid " + border + "; }"
            "QMenuBar::item, QMenu::item { background-color: transparent; padding: 6px 10px; }"
            "QMenuBar::item:selected, QMenu::item:selected { background-color: " + selectedBackground + "; color: white; }"
            "QComboBox QAbstractItemView { background-color: " + widgetBackground + "; color: " + foreground + "; selection-background-color: " + selectedBackground + "; selection-color: white; border: 1px solid " + border + "; }"
            "QTabWidget::pane { background-color: " + widgetBackground + "; border: 1px solid " + border + "; border-radius: 5px; }"
            "QTabBar::tab { background-color: " + widgetBackground + "; color: " + foreground + "; border: 1px solid " + border + "; border-bottom: none; border-top-left-radius: 5px; border-top-right-radius: 5px; padding: 6px 12px; }"
            "QTabBar::tab:selected { background-color: " + selectedBackground + "; color: " + foreground + "; border: 1px solid " + hoverBorder + "; border-bottom: none; }"
            "QTabBar::tab:hover { background-color: " + selectedBackground + "; border: 1px solid " + hoverBorder + "; }"
        );
    };

    if (arg1 == "Default") {

        qDebug() << "Default";

        qApp->setStyleSheet(

                    "QMainWindow, QWidget {"
                    "background-color: #202124;"
                    "color: #d6d6d6;"
                    "}"

                    "QComboBox, QTextEdit {"
                    "background-color: #292a2d;"
                    "color: #e8e8e8;"
                    "border: 1px solid #4a4b4f;"
                    "border-radius: 5px;"
                    "padding: 4px;"
                    "}"

                    "QComboBox:hover, QTextEdit:hover {"
                    "border: 1px solid #707177;"
                    "}"

                    "QComboBox:focus, QTextEdit:focus {"
                    "border: 1px solid #9aa0a6;"
                    "}"

                    "QMenuBar, QMenu {"
                    "background-color: #292a2d;"
                    "color: #d6d6d6;"
                    "border: 1px solid #4a4b4f;"
                    "}"

                    "QMenuBar::item, QMenu::item {"
                    "background-color: transparent;"
                    "padding: 6px 10px;"
                    "}"

                    "QMenuBar::item:selected, QMenu::item:selected {"
                    "background-color: #3a3b3f;"
                    "color: white;"
                    "}"

                    "QComboBox QAbstractItemView {"
                    "background-color: #292a2d;"
                    "color: #e8e8e8;"
                    "selection-background-color: #3a3b3f;"
                    "selection-color: white;"
                    "border: 1px solid #4a4b4f;"
                    "}"

                    "QTabWidget::pane {"
                    "background-color: #202124;"
                    "border: 1px solid #4a4b4f;"
                    "border-radius: 5px;"
                    "}"

                    "QTabBar::tab {"
                    "background-color: #292a2d;"
                    "color: #d6d6d6;"
                    "border: 1px solid #4a4b4f;"
                    "border-bottom: none;"
                    "border-top-left-radius: 5px;"
                    "border-top-right-radius: 5px;"
                    "padding: 6px 12px;"
                    "}"

                    "QTabBar::tab:selected {"
                    "background-color: #3a3b3f;"
                    "color: white;"
                    "border: 1px solid #707177;"
                    "border-bottom: none;"
                    "}"

                    "QTabBar::tab:hover {"
                    "background-color: #3a3b3f;"
                    "border: 1px solid #707177;"
                    "}"

        );
    }

    else if (arg1 == "Light") {

        qDebug() << "Light";

        qApp->setStyleSheet(

                    "QMainWindow, QWidget {"
                    "background-color: #f2f2f2;"
                    "color: #202124;"
                    "}"

                    "QComboBox, QTextEdit {"
                    "background-color: #ffffff;"
                    "color: #202124;"
                    "border: 1px solid #c7c7c7;"
                    "border-radius: 5px;"
                    "padding: 4px;"
                    "}"

                    "QComboBox:hover, QTextEdit:hover {"
                    "border: 1px solid #999999;"
                    "}"

                    "QComboBox:focus, QTextEdit:focus {"
                    "border: 1px solid #555555;"
                    "}"

                    "QMenuBar, QMenu {"
                    "background-color: #ffffff;"
                    "color: #202124;"
                    "border: 1px solid #d0d0d0;"
                    "}"

                    "QMenuBar::item, QMenu::item {"
                    "background-color: transparent;"
                    "padding: 6px 10px;"
                    "}"

                    "QMenuBar::item:selected, QMenu::item:selected {"
                    "background-color: #e5e5e5;"
                    "color: #000000;"
                    "}"

                    "QComboBox QAbstractItemView {"
                    "background-color: white;"
                    "color: #202124;"
                    "selection-background-color: #e5e5e5;"
                    "selection-color: black;"
                    "border: 1px solid #c7c7c7;"
                    "}"

                    "QTabWidget::pane {"
                    "background-color: #f2f2f2;"
                    "border: 1px solid #c7c7c7;"
                    "border-radius: 5px;"
                    "}"

                    "QTabBar::tab {"
                    "background-color: #ffffff;"
                    "color: #202124;"
                    "border: 1px solid #c7c7c7;"
                    "border-bottom: none;"
                    "border-top-left-radius: 5px;"
                    "border-top-right-radius: 5px;"
                    "padding: 6px 12px;"
                    "}"

                    "QTabBar::tab:selected {"
                    "background-color: #e5e5e5;"
                    "color: #202124;"
                    "border: 1px solid #999999;"
                    "border-bottom: none;"
                    "}"

                    "QTabBar::tab:hover {"
                    "background-color: #e5e5e5;"
                    "border: 1px solid #999999;"
                    "}"

        );
    }

    else if (arg1 == "Dark") {

        qDebug() << "Dark";

        qApp->setStyleSheet(

                    "QMainWindow, QWidget {"
                    "background-color: #121212;"
                    "color: #eeeeee;"
                    "}"

                    "QComboBox, QTextEdit {"
                    "background-color: #1e1e1e;"
                    "color: #eeeeee;"
                    "border: 1px solid #333333;"
                    "border-radius: 5px;"
                    "padding: 4px;"
                    "}"

                    "QComboBox:hover, QTextEdit:hover {"
                    "border: 1px solid #555555;"
                    "}"

                    "QComboBox:focus, QTextEdit:focus {"
                    "border: 1px solid #777777;"
                    "}"

                    "QMenuBar, QMenu {"
                    "background-color: #1e1e1e;"
                    "color: #eeeeee;"
                    "border: 1px solid #333333;"
                    "}"

                    "QMenuBar::item, QMenu::item {"
                    "background-color: transparent;"
                    "padding: 6px 10px;"
                    "}"

                    "QMenuBar::item:selected, QMenu::item:selected {"
                    "background-color: #333333;"
                    "color: white;"
                    "}"

                    "QComboBox QAbstractItemView {"
                    "background-color: #1e1e1e;"
                    "color: #eeeeee;"
                    "selection-background-color: #333333;"
                    "selection-color: white;"
                    "border: 1px solid #333333;"
                    "}"

                    "QTabWidget::pane {"
                    "background-color: #121212;"
                    "border: 1px solid #333333;"
                    "border-radius: 5px;"
                    "}"

                    "QTabBar::tab {"
                    "background-color: #1e1e1e;"
                    "color: #eeeeee;"
                    "border: 1px solid #333333;"
                    "border-bottom: none;"
                    "border-top-left-radius: 5px;"
                    "border-top-right-radius: 5px;"
                    "padding: 6px 12px;"
                    "}"

                    "QTabBar::tab:selected {"
                    "background-color: #333333;"
                    "color: white;"
                    "border: 1px solid #555555;"
                    "border-bottom: none;"
                    "}"

                    "QTabBar::tab:hover {"
                    "background-color: #333333;"
                    "border: 1px solid #555555;"
                    "}"

        );
    }

    else if (arg1 == "Red") {

        qDebug() << "Red";

        qApp->setStyleSheet(

                    "QMainWindow, QWidget {"
                    "background-color: #180909;"
                    "color: #f2dada;"
                    "}"

                    "QComboBox, QTextEdit {"
                    "background-color: #260f0f;"
                    "color: #f5dddd;"
                    "border: 1px solid #632222;"
                    "border-radius: 5px;"
                    "padding: 4px;"
                    "}"

                    "QComboBox:hover, QTextEdit:hover {"
                    "border: 1px solid #963737;"
                    "}"

                    "QComboBox:focus, QTextEdit:focus {"
                    "border: 1px solid #c94a4a;"
                    "}"

                    "QMenuBar, QMenu {"
                    "background-color: #260f0f;"
                    "color: #f2dada;"
                    "border: 1px solid #632222;"
                    "}"

                    "QMenuBar::item, QMenu::item {"
                    "background-color: transparent;"
                    "padding: 6px 10px;"
                    "}"

                    "QMenuBar::item:selected, QMenu::item:selected {"
                    "background-color: #5c1c1c;"
                    "color: white;"
                    "}"

                    "QComboBox QAbstractItemView {"
                    "background-color: #260f0f;"
                    "color: #f5dddd;"
                    "selection-background-color: #5c1c1c;"
                    "selection-color: white;"
                    "border: 1px solid #632222;"
                    "}"

                    "QTabWidget::pane {"
                    "background-color: #180909;"
                    "border: 1px solid #632222;"
                    "border-radius: 5px;"
                    "}"

                    "QTabBar::tab {"
                    "background-color: #260f0f;"
                    "color: #f2dada;"
                    "border: 1px solid #632222;"
                    "border-bottom: none;"
                    "border-top-left-radius: 5px;"
                    "border-top-right-radius: 5px;"
                    "padding: 6px 12px;"
                    "}"

                    "QTabBar::tab:selected {"
                    "background-color: #5c1c1c;"
                    "color: white;"
                    "border: 1px solid #963737;"
                    "border-bottom: none;"
                    "}"

                    "QTabBar::tab:hover {"
                    "background-color: #5c1c1c;"
                    "border: 1px solid #963737;"
                    "}"

        );
    }

    else if (arg1 == "Orange") {
        qDebug() << "Orange";
        qApp->setStyleSheet(
            "QMainWindow, QWidget { background-color: #1f1208; color: #ffe0c2; }"
            "QComboBox, QTextEdit { background-color: #321d0d; color: #ffe8d1; border: 1px solid #8a4b19; border-radius: 5px; padding: 4px; }"
            "QComboBox:hover, QTextEdit:hover { border: 1px solid #c76b22; }"
            "QComboBox:focus, QTextEdit:focus { border: 1px solid #f08a24; }"
            "QMenuBar, QMenu { background-color: #321d0d; color: #ffe0c2; border: 1px solid #8a4b19; }"
            "QMenuBar::item, QMenu::item { background-color: transparent; padding: 6px 10px; }"
            "QMenuBar::item:selected, QMenu::item:selected { background-color: #5c3214; color: white; }"
            "QComboBox QAbstractItemView { background-color: #321d0d; color: #ffe8d1; selection-background-color: #5c3214; selection-color: white; border: 1px solid #8a4b19; }"
            "QTabWidget::pane { background-color: #1f1208; border: 1px solid #8a4b19; border-radius: 5px; }"
            "QTabBar::tab { background-color: #321d0d; color: #ffe0c2; border: 1px solid #8a4b19; border-bottom: none; border-top-left-radius: 5px; border-top-right-radius: 5px; padding: 6px 12px; }"
            "QTabBar::tab:selected { background-color: #5c3214; color: white; border: 1px solid #c76b22; border-bottom: none; }"
            "QTabBar::tab:hover { background-color: #5c3214; border: 1px solid #c76b22; }"
        );
    }

    else if (arg1 == "Yellow") {
        qDebug() << "Yellow";
        qApp->setStyleSheet(
            "QMainWindow, QWidget { background-color: #1d1a08; color: #fff5bd; }"
            "QComboBox, QTextEdit { background-color: #302b0b; color: #fff8d6; border: 1px solid #81721b; border-radius: 5px; padding: 4px; }"
            "QComboBox:hover, QTextEdit:hover { border: 1px solid #b5a329; }"
            "QComboBox:focus, QTextEdit:focus { border: 1px solid #e0ca35; }"
            "QMenuBar, QMenu { background-color: #302b0b; color: #fff5bd; border: 1px solid #81721b; }"
            "QMenuBar::item, QMenu::item { background-color: transparent; padding: 6px 10px; }"
            "QMenuBar::item:selected, QMenu::item:selected { background-color: #554d12; color: white; }"
            "QComboBox QAbstractItemView { background-color: #302b0b; color: #fff8d6; selection-background-color: #554d12; selection-color: white; border: 1px solid #81721b; }"
            "QTabWidget::pane { background-color: #1d1a08; border: 1px solid #81721b; border-radius: 5px; }"
            "QTabBar::tab { background-color: #302b0b; color: #fff5bd; border: 1px solid #81721b; border-bottom: none; border-top-left-radius: 5px; border-top-right-radius: 5px; padding: 6px 12px; }"
            "QTabBar::tab:selected { background-color: #554d12; color: white; border: 1px solid #b5a329; border-bottom: none; }"
            "QTabBar::tab:hover { background-color: #554d12; border: 1px solid #b5a329; }"
        );
    }

    else if (arg1 == "Green") {
        qDebug() << "Green";
        qApp->setStyleSheet(
            "QMainWindow, QWidget { background-color: #081c10; color: #c9f3d5; }"
            "QComboBox, QTextEdit { background-color: #0d2b19; color: #d9f8e2; border: 1px solid #236c3d; border-radius: 5px; padding: 4px; }"
            "QComboBox:hover, QTextEdit:hover { border: 1px solid #369957; }"
            "QComboBox:focus, QTextEdit:focus { border: 1px solid #55c878; }"
            "QMenuBar, QMenu { background-color: #0d2b19; color: #c9f3d5; border: 1px solid #236c3d; }"
            "QMenuBar::item, QMenu::item { background-color: transparent; padding: 6px 10px; }"
            "QMenuBar::item:selected, QMenu::item:selected { background-color: #18512e; color: white; }"
            "QComboBox QAbstractItemView { background-color: #0d2b19; color: #d9f8e2; selection-background-color: #18512e; selection-color: white; border: 1px solid #236c3d; }"
            "QTabWidget::pane { background-color: #081c10; border: 1px solid #236c3d; border-radius: 5px; }"
            "QTabBar::tab { background-color: #0d2b19; color: #c9f3d5; border: 1px solid #236c3d; border-bottom: none; border-top-left-radius: 5px; border-top-right-radius: 5px; padding: 6px 12px; }"
            "QTabBar::tab:selected { background-color: #18512e; color: white; border: 1px solid #369957; border-bottom: none; }"
            "QTabBar::tab:hover { background-color: #18512e; border: 1px solid #369957; }"
        );
    }

    else if (arg1 == "Blue") {
        qDebug() << "Blue";
        qApp->setStyleSheet(
            "QMainWindow, QWidget { background-color: #081522; color: #c9e8ff; }"
            "QComboBox, QTextEdit { background-color: #0d2438; color: #d9efff; border: 1px solid #245c86; border-radius: 5px; padding: 4px; }"
            "QComboBox:hover, QTextEdit:hover { border: 1px solid #378bc2; }"
            "QComboBox:focus, QTextEdit:focus { border: 1px solid #55b7ed; }"
            "QMenuBar, QMenu { background-color: #0d2438; color: #c9e8ff; border: 1px solid #245c86; }"
            "QMenuBar::item, QMenu::item { background-color: transparent; padding: 6px 10px; }"
            "QMenuBar::item:selected, QMenu::item:selected { background-color: #16466b; color: white; }"
            "QComboBox QAbstractItemView { background-color: #0d2438; color: #d9efff; selection-background-color: #16466b; selection-color: white; border: 1px solid #245c86; }"
            "QTabWidget::pane { background-color: #081522; border: 1px solid #245c86; border-radius: 5px; }"
            "QTabBar::tab { background-color: #0d2438; color: #c9e8ff; border: 1px solid #245c86; border-bottom: none; border-top-left-radius: 5px; border-top-right-radius: 5px; padding: 6px 12px; }"
            "QTabBar::tab:selected { background-color: #16466b; color: white; border: 1px solid #378bc2; border-bottom: none; }"
            "QTabBar::tab:hover { background-color: #16466b; border: 1px solid #378bc2; }"
        );
    }

    else if (arg1 == "Purple") {
        qDebug() << "Purple";
        qApp->setStyleSheet(
            "QMainWindow, QWidget { background-color: #160d21; color: #ead7ff; }"
            "QComboBox, QTextEdit { background-color: #241236; color: #f0e1ff; border: 1px solid #63378c; border-radius: 5px; padding: 4px; }"
            "QComboBox:hover, QTextEdit:hover { border: 1px solid #8c52c4; }"
            "QComboBox:focus, QTextEdit:focus { border: 1px solid #b979ed; }"
            "QMenuBar, QMenu { background-color: #241236; color: #ead7ff; border: 1px solid #63378c; }"
            "QMenuBar::item, QMenu::item { background-color: transparent; padding: 6px 10px; }"
            "QMenuBar::item:selected, QMenu::item:selected { background-color: #45236a; color: white; }"
            "QComboBox QAbstractItemView { background-color: #241236; color: #f0e1ff; selection-background-color: #45236a; selection-color: white; border: 1px solid #63378c; }"
            "QTabWidget::pane { background-color: #160d21; border: 1px solid #63378c; border-radius: 5px; }"
            "QTabBar::tab { background-color: #241236; color: #ead7ff; border: 1px solid #63378c; border-bottom: none; border-top-left-radius: 5px; border-top-right-radius: 5px; padding: 6px 12px; }"
            "QTabBar::tab:selected { background-color: #45236a; color: white; border: 1px solid #8c52c4; border-bottom: none; }"
            "QTabBar::tab:hover { background-color: #45236a; border: 1px solid #8c52c4; }"
        );
    }

    else if (arg1 == "Pink") {
        qDebug() << "Pink";
        qApp->setStyleSheet(
            "QMainWindow, QWidget { background-color: #210d18; color: #ffd9e8; }"
            "QComboBox, QTextEdit { background-color: #351326; color: #ffe4ef; border: 1px solid #8c3e62; border-radius: 5px; padding: 4px; }"
            "QComboBox:hover, QTextEdit:hover { border: 1px solid #c45a88; }"
            "QComboBox:focus, QTextEdit:focus { border: 1px solid #ed78a9; }"
            "QMenuBar, QMenu { background-color: #351326; color: #ffd9e8; border: 1px solid #8c3e62; }"
            "QMenuBar::item, QMenu::item { background-color: transparent; padding: 6px 10px; }"
            "QMenuBar::item:selected, QMenu::item:selected { background-color: #612343; color: white; }"
            "QComboBox QAbstractItemView { background-color: #351326; color: #ffe4ef; selection-background-color: #612343; selection-color: white; border: 1px solid #8c3e62; }"
            "QTabWidget::pane { background-color: #210d18; border: 1px solid #8c3e62; border-radius: 5px; }"
            "QTabBar::tab { background-color: #351326; color: #ffd9e8; border: 1px solid #8c3e62; border-bottom: none; border-top-left-radius: 5px; border-top-right-radius: 5px; padding: 6px 12px; }"
            "QTabBar::tab:selected { background-color: #612343; color: white; border: 1px solid #c45a88; border-bottom: none; }"
            "QTabBar::tab:hover { background-color: #612343; border: 1px solid #c45a88; }"
        );
    }

    else if (arg1 == "Cyan") {
        qDebug() << "Cyan";
        qApp->setStyleSheet(
            "QMainWindow, QWidget { background-color: #071b1d; color: #c7f5f5; }"
            "QComboBox, QTextEdit { background-color: #0b2b2e; color: #d8ffff; border: 1px solid #23767a; border-radius: 5px; padding: 4px; }"
            "QComboBox:hover, QTextEdit:hover { border: 1px solid #38a9ad; }"
            "QComboBox:focus, QTextEdit:focus { border: 1px solid #61d9dc; }"
            "QMenuBar, QMenu { background-color: #0b2b2e; color: #c7f5f5; border: 1px solid #23767a; }"
            "QMenuBar::item, QMenu::item { background-color: transparent; padding: 6px 10px; }"
            "QMenuBar::item:selected, QMenu::item:selected { background-color: #15565a; color: white; }"
            "QComboBox QAbstractItemView { background-color: #0b2b2e; color: #d8ffff; selection-background-color: #15565a; selection-color: white; border: 1px solid #23767a; }"
            "QTabWidget::pane { background-color: #071b1d; border: 1px solid #23767a; border-radius: 5px; }"
            "QTabBar::tab { background-color: #0b2b2e; color: #c7f5f5; border: 1px solid #23767a; border-bottom: none; border-top-left-radius: 5px; border-top-right-radius: 5px; padding: 6px 12px; }"
            "QTabBar::tab:selected { background-color: #15565a; color: white; border: 1px solid #38a9ad; border-bottom: none; }"
            "QTabBar::tab:hover { background-color: #15565a; border: 1px solid #38a9ad; }"
        );
    }

    else if (arg1 == "Light Red") {
        qDebug() << "Light Red";
        applyTheme("#fff5f5", "#ffffff", "#3b1111", "#e0aaaa", "#c94a4a", "#f8dada");
    }
    else if (arg1 == "Dark Red") {
        qDebug() << "Dark Red";
        applyTheme("#180909", "#260f0f", "#f5dddd", "#632222", "#c94a4a", "#5c1c1c");
    }
    else if (arg1 == "Light Orange") {
        qDebug() << "Light Orange";
        applyTheme("#fff7ef", "#ffffff", "#3d210c", "#e5b98c", "#d87824", "#fce2c4");
    }
    else if (arg1 == "Dark Orange") {
        qDebug() << "Dark Orange";
        applyTheme("#1f1208", "#321d0d", "#ffe8d1", "#8a4b19", "#f08a24", "#5c3214");
    }
    else if (arg1 == "Light Yellow") {
        qDebug() << "Light Yellow";
        applyTheme("#fffef0", "#ffffff", "#3b3508", "#d9cd72", "#aa9a20", "#f5efb8");
    }
    else if (arg1 == "Dark Yellow") {
        qDebug() << "Dark Yellow";
        applyTheme("#1d1a08", "#302b0b", "#fff8d6", "#81721b", "#e0ca35", "#554d12");
    }
    else if (arg1 == "Light Green") {
        qDebug() << "Light Green";
        applyTheme("#f2fff5", "#ffffff", "#10351b", "#a4d4b1", "#369957", "#d2f0d9");
    }
    else if (arg1 == "Dark Green") {
        qDebug() << "Dark Green";
        applyTheme("#081c10", "#0d2b19", "#d9f8e2", "#236c3d", "#55c878", "#18512e");
    }
    else if (arg1 == "Light Blue") {
        qDebug() << "Light Blue";
        applyTheme("#f0f9ff", "#ffffff", "#0d2d45", "#a5cde8", "#378bc2", "#d4ecfa");
    }
    else if (arg1 == "Dark Blue") {
        qDebug() << "Dark Blue";
        applyTheme("#081522", "#0d2438", "#d9efff", "#245c86", "#55b7ed", "#16466b");
    }
    else if (arg1 == "Light Purple") {
        qDebug() << "Light Purple";
        applyTheme("#faf5ff", "#ffffff", "#2d1645", "#c9a9e2", "#8c52c4", "#eadcf7");
    }
    else if (arg1 == "Dark Purple") {
        qDebug() << "Dark Purple";
        applyTheme("#160d21", "#241236", "#f0e1ff", "#63378c", "#b979ed", "#45236a");
    }
    else if (arg1 == "Light Pink") {
        qDebug() << "Light Pink";
        applyTheme("#fff4f8", "#ffffff", "#451329", "#e4a8c0", "#c45a88", "#f8d7e5");
    }
    else if (arg1 == "Dark Pink") {
        qDebug() << "Dark Pink";
        applyTheme("#210d18", "#351326", "#ffe4ef", "#8c3e62", "#ed78a9", "#612343");
    }
    else if (arg1 == "Light Cyan") {
        qDebug() << "Light Cyan";
        applyTheme("#efffff", "#ffffff", "#0c3638", "#9ad9da", "#38a9ad", "#d0f1f1");
    }
    else if (arg1 == "Dark Cyan") {
        qDebug() << "Dark Cyan";
        applyTheme("#071b1d", "#0b2b2e", "#d8ffff", "#23767a", "#61d9dc", "#15565a");
    }
}

