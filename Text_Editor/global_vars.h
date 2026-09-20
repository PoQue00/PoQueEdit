// Source - https://stackoverflow.com/a/12290652
// Posted by paddy
// Retrieved 2026-09-20, License - CC BY-SA 3.0

#ifndef MY_GLOBALS_H
#define MY_GLOBALS_H

// This is a declaration of your variable, which tells the linker this value
// is found elsewhere.  Anyone who wishes to use it must include global.h,
// either directly or indirectly.

QString currentTheme = "Default";

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

extern int myglobalint;

#endif
