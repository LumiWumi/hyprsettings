#pragma once

#include "sidebar.h"
#include <QHBoxLayout>
#include <QWidget>

class Window : public QWidget {
  Q_OBJECT
public:
  explicit Window(QWidget *parent = nullptr);

signals:
public slots:

private:
  QHBoxLayout *m_layout;
  SideBar *m_sidebar;
};
