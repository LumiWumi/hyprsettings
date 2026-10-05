#include "window.h"
#include <QPushButton>

Window::Window(QWidget *parent) : QWidget(parent) {
  m_layout = new QHBoxLayout(this);
  m_sidebar = new SideBar(nullptr);
  m_layout->addWidget(m_sidebar);
}
