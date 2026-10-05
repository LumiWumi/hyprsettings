#include "sidebar.h"
#include <QPushButton>

SideBar::SideBar(QWidget *parent) : QScrollArea(parent) {

  this->setWidgetResizable(true);
  this->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);

  m_content = new QWidget(this);
  this->setWidget(m_content);

  m_layout = new QVBoxLayout(m_content);
  m_layout->setSpacing(0);
}
