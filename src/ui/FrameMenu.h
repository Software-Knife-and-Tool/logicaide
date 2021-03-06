/********
 **
 **  SPDX-License-Identifier: BSD-3-Clause
 **
 **  Copyright (c) 2017-2021 James M. Putnam <putnamjm.design@gmail.com>
 **
 **/

/********
 **
 **  FrameMenu.h: FrameMenu class
 **
 **/
#ifndef GYREUI_UI_FRAMEMENU_H_
#define GYREUI_UI_FRAMEMENU_H_

#include <QMainWindow>
#include <QMenu>

#include "EnvironmentView.h"
#include "FileView.h"
#include "MainMenuBar.h"
#include "MainWindow.h"
#include "SystemView.h"

QT_BEGIN_NAMESPACE
class QAction;
class QActionGroup;
class QLabel;
class QMenu;
QT_END_NAMESPACE

namespace gyreui {

class MainMenuBar;
class MainWindow;
class EnvironmentView;
class SystemView;
class FileView;

class FrameMenu : public QMenu {
  Q_OBJECT

 public:
  void envFrame();
  void sysFrame();

  QWidget* defaultView();

  explicit FrameMenu(MainMenuBar*);

 private:
  FileView* fv;
  MainMenuBar* mb;
  MainWindow* mw;
  EnvironmentView* ev;
  SystemView* sv;
};

} /* namespace gyreui */

#endif /* GYREUI_UI_FRAMEMENU_H_ */
