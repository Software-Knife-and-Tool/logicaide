#ifndef _LOCUS_SRC_LOCUS_MAINWINDOW_H_
#define _LOCUS_SRC_LOCUS_MAINWINDOW_H_

#include <QMainWindow>
#include <QStatusBar>

QT_BEGIN_NAMESPACE
class QAction;
class QActionGroup;
class QLabel;
class QMenu;
class QStatusBar;
QT_END_NAMESPACE

namespace locus {
  
class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow();

  void setContextStatus(const char* str) {

    statusBar()->showMessage(tr(str));
  }
  
 protected:
#ifndef QT_NO_CONTEXTMENU
  void contextMenuEvent(QContextMenuEvent *event) override;
#endif // QT_NO_CONTEXTMENU

 private slots:
  void newFile();
  void open();
  void save();
  void print();
  void undo();
  void redo();
  void cut();
  void copy();
  void paste();
  void bold();
  void italic();
  void leftAlign();
  void rightAlign();
  void justify();
  void center();
  void setLineSpacing();
  void setParagraphSpacing();
  void about();
  void aboutQt();

 private:
  void createActions();
  void createMenus();

  QMenu *fileMenu;
  QMenu *editMenu;
  QMenu *formatMenu;
  QMenu *helpMenu;

  QActionGroup *alignmentGroup;
  QAction *newAct;
  QAction *openAct;
  QAction *saveAct;
  QAction *printAct;
  QAction *exitAct;
  QAction *undoAct;
  QAction *redoAct;
  QAction *cutAct;
  QAction *copyAct;
  QAction *pasteAct;
  QAction *boldAct;
  QAction *italicAct;
  QAction *leftAlignAct;
  QAction *rightAlignAct;
  QAction *justifyAct;
  QAction *centerAct;
  QAction *setLineSpacingAct;
  QAction *setParagraphSpacingAct;
  QAction *aboutAct;
  QAction *aboutQtAct;

 private:
  
  QLabel *infoLabel;
};

} /* locus namespace */

#endif  /* _LOCUS_SRC_LOCUS_MAINWINDOW_H_ */