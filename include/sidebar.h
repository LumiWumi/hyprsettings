#pragma once

#include <QScrollArea>
#include <QVBoxLayout>

class SideBar : public QScrollArea {
  Q_OBJECT
public:
  explicit SideBar(QWidget *parent);

signals:
public slots:

private:
  QWidget *m_content;
  QVBoxLayout *m_layout;
};
