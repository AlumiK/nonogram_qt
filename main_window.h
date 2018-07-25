﻿#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include "menu_button.h"

#include <QHBoxLayout>
#include <QLabel>

extern MenuButton* global_btn_resume;

class MainWindow : public QWidget {
	Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
	~MainWindow();

private:
	QLabel* label_icon;
	QLabel* label_game_name;
	QLabel* label_game_name_sub;
	MenuButton* btn_start;
	MenuButton* btn_resume;
	MenuButton* btn_about;
	MenuButton* btn_exit;
	QVBoxLayout* layout_title;
	QHBoxLayout* layout_btn;
	QVBoxLayout* layout_this;

private slots:
	void showAbout();
	void showLevelSelecter();
	static void loadGameSlot();
};

#endif // MAIN_WINDOW_H
