#pragma once

#include <QStackedLayout>
#include <QWidget>

#include "selfdrive/ui/qt/k_home.h"
#include "selfdrive/ui/qt/offroad/onboarding.h"
#include "selfdrive/ui/qt/offroad/settings.h"

class MainWindow : public QWidget {
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);

private:
  bool eventFilter(QObject *obj, QEvent *event) override;
  void openSettings();
  void closeSettings();

  Device device;

  QStackedLayout *main_layout;
  HomeWindow *homeWindow;
  SettingsWindow *settingsWindow;
  OnboardingWindow *onboardingWindow;
};
